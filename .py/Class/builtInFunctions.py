class demo():
    def __init__(self,var):
        self.var=var
    def display(self):
        print("vari is ",self.var)
obj=demo(10)
obj.display()
print("has attributes",hasattr(obj,'var'))
print("get attributes",getattr(obj,'var'))
print("has attributes",setattr(obj,'var',1000))
print(obj.var)
print("has attributes",setattr(obj,'count',100))
print(obj.count)
delattr(obj,'var')
