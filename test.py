from pycparser import parse_file, c_ast
from pycparser import c_parser
parser = c_parser.CParser()
ast = parser.parse('int a[10];char b[1];')


class ArrayVisitor(c_ast.NodeVisitor):
    def visit_ArrayDecl(self, node):
        print("Found an array!")

        # 打印数组类型
        print("Type:", node.type.type.names)

        # 如果数组大小已知，打印数组大小
        print(type(node))
        if node.dim:
            print("Size:", node.dim.value)

        # 继续访问子节点
        self.generic_visit(node)


# 创建一个访问者并对AST应用它
visitor = ArrayVisitor()
visitor.visit(ast)
