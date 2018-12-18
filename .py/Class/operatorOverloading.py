class op:
    def __init__(self,x=0):
        self.x=x
    def __add__(self,other):
        print("obj1= ",self.x)
        print("obj2= ",other.x)
        return ((self.x+other.x))
obj1=op(10)
obj2=op(20)
obj3=obj1+obj2
print(obj3)
