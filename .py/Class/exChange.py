#"Class" Test
class change:
    def __init__(self,x,y,z):
        self.a=x+y+z
x=change(1,2,3)
y=getattr(x,'a')
setattr(x,'a',y+1)
print(x.a)
