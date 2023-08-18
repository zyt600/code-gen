from pycparser import parse_file, c_generator, c_ast
import pycparser
def is_array(declaration):
    return isinstance(declaration.type, c_ast.ArrayDecl)

def generate_cpp_code(filename):
    ast = parse_file(filename, use_cpp=True)

    generator = c_generator.CGenerator()
    struct_dict = {}
    basic_types = {'int', 'char', 'float', 'double', 'long', 'short', 'unsigned', 'signed', 'bool','size_t', 'uint8_t', 'uint16_t', 'uint32_t', 'uint64_t', 'int8_t', 'int16_t', 'int32_t', 'int64_t'}
    # find typedef names for structures and store them
    for ext in ast.ext:
        if isinstance(ext, pycparser.c_ast.Typedef) and \
           isinstance(ext.type.type, pycparser.c_ast.Struct):
            struct_dict[ext.type.type.name] = ext.name

    print(struct_dict)

    with open("generated_code.cpp", "w") as cpp_file:
        h_file= open("generated_code.h", "w")
        # cpp_file.write("#include <iostream>\n")
        # cpp_file.write(f'#include "{filename}"\n\n')

        for item in ast.ext:
            if isinstance(item, pycparser.c_ast.Typedef) and \
               isinstance(item.type.type, pycparser.c_ast.Struct):
                struct_name = struct_dict[item.type.type.name]

                if struct_name is None:
                    print("is none")
                    continue # skip unnamed structures
                h_file.write(f'static void print(const {struct_name}& item);\n')
                cpp_file.write(f'void OMnetLogger::print(const {struct_name}& item) {{\n')
                cpp_file.write(r'    loggerOMnetAPI->log(Level,"{");')
                cpp_file.write('\n')
                for field in item.type.type.decls:
                    field_name = field.name
                    field_type = generator.visit(field.type)
                    print(field_name, field_type)
                    if field_type in basic_types:
                        print("is basic type",field_type)
                        cpp_file.write(f'    loggerOMnetAPI->log(Level, "{field_name}: {{}}", item.{field_name});\n')
                    elif "char [" in field_type:
                        print("is char array",field_type)
                        cpp_file.write(f'    loggerOMnetAPI->log(Level, "{field_name}: {{}}", std::string(item.{field_name},sizeof(item.{field_name})).c_str());\n')
                    elif is_array(field):
                        print("is array",field_type)
                        cpp_file.write(f"    for(int i=0; i<{field.type.dim.value}; i++){{\n")
                        cpp_file.write(f"        print(item.{field_name}[i]);\n")
                        cpp_file.write(f"    }}\n")
                    else:
                        print("not basic type",field_type)
                        cpp_file.write(f"    print(item.{field_name});\n")
                    # cpp_file.write(f'    std::cout << "{field_name}: " << ptr->{field_name} << std::endl;\n')
                cpp_file.write(r'    loggerOMnetAPI->log(Level,"}");')
                cpp_file.write("\n}\n\n")
                # print(type_list)


filename = 'omex_sgx.h'

generate_cpp_code(filename)
print("Done!")