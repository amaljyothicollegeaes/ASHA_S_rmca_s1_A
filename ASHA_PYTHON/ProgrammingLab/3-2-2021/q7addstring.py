def verbing(s):
    if len(s) < 3:
        print("please enter a valid string")
    elif s.endswith('ing'):
        s = s + 'ly'
        print(s)
    else:
        s = s + 'ing'
        print(s)
   # data=string(input("enter a string"))
st=input("enter the string")
verbing(st)