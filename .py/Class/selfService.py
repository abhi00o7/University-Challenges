class selfish:
    x=22
    def shelf(self,x=1):
        x=33
        print("local= ",x)
        print("instance= ",self.x)
class self_demo():
    def methodA(self):
        print("m 1")
        print("called from a")
    def methodB(self):
        print("m 2 calling m 1")
        self.methodA()
ob=self_demo()
ob.methodB()
