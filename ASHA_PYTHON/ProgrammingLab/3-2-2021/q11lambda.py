import  math
r_area = lambda h,b: 1/2*b*h
#print(r_area(2,4))
s_area = lambda s:s*s
#print(s_area(2))
print("triangle")
h=float(input("enter height of the triangle"))
b=float(input("enter base"))
print("area=",r_area(b,h))
print("square")
s=float(input("enter side"))
print("area=",s_area(s))