input_string = input("Enter a list element separated by comma ")
list  = input_string.split(',')
print("The enterd list is")
for x in range(len(list)):
    print (list[x])
print("the first and last colour is\n")
print( "%s %s"%(list[0],list[-1]))
r