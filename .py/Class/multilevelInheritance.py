class box:
    h=0
    w=0
    l=0
    def __init__(self,H,W,L):
        self.h=H
        self.w=W
        self.l=L
    def volume(self):
        return self.h*self.l*self.w
class cBox(box):
    we=0
    def __init__(self,WE,H,W,L):
        self.we=WE
        self.h=H
        self.w=W
        self.l=L
    def volume(self):
        return self.h*self.l*self.w
B1=cBox(10,20,10,2)
print(B1.volume)
