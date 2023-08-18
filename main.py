from pycparser import parse_file, c_generator
import pycparser

def generate_cpp_code(filename):
    ast = parse_file(filename, use_cpp=True)

    generator = c_generator.CGenerator()
    struct_dict = {}

    # find typedef names for structures and store them
    for ext in ast.ext:
        if isinstance(ext, pycparser.c_ast.Typedef) and \
           isinstance(ext.type.type, pycparser.c_ast.Struct):
            struct_dict[ext.type.type.name] = ext.name

    print(struct_dict)

    with open("generated_code.cpp", "w") as cpp_file:
        cpp_file.write("#include <iostream>\n")
        cpp_file.write(f'#include "{filename}"\n\n')

        for item in ast.ext:
            if isinstance(item, pycparser.c_ast.Typedef) and \
               isinstance(item.type.type, pycparser.c_ast.Struct):
                struct_name = struct_dict[item.type.type.name]

                if struct_name is None:
                    continue # skip unnamed structures

                cpp_file.write(f'void print_{struct_name}({struct_name}* ptr) {{\n')
                for field in item.type.type.decls:
                    field_name = field.name
                    field_type = generator.visit(field.type)
                    cpp_file.write(f'    std::cout << "{field_name}: " << ptr->{field_name} << std::endl;\n')
                cpp_file.write("}\n\n")

filename = 'omex_sgx.h'

generate_cpp_code(filename)
print("Done!")