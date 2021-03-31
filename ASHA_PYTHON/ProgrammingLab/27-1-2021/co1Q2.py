year = int(input("Enter initial Year: "))
year1 = int(input("Enter final Year: "))
count = year
while count <= year1:
 if year % 4 == 0 and(year % 100 != 0 or year % 400 == 0):
    print(year)
    year= year + 4
    count=year
    
   
