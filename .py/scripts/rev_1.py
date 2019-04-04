n=(input("Enter Your Number"))
n=int(n)
s=0
while n>=0:
     n=int(n)
	 s=int(s)
	 r=r%10
	 s=(s*10)+r
	 n=n/10
     print(s)
