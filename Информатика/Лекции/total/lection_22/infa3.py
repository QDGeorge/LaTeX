class Node:
    def __init__(self,key,value):
        self.key=key
        self.value=value
        self.parent=None
        self.left=None
        self.right=None
class Tree:
    def __init__(self):
        self.root=None
    def print(self, node):# благодаря этому нам не важно, пустое наше поддерево или нет-крайний случай проверен).
        if node is None:
            return
        self.print(node.left)
        print((node.key,node.value))
        self.print(node.right)