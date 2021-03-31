def longestLength(a):
    max1 = len(a[0])
    temp = a[0]
    for i in a:
        if (len(i) > max1):
            max1 = len(i)
            temp = i

    print("The word with the longest length is:", temp,
          " and length is ", max1)

input_string = input("Enter a list element separated by space ")
list  = input_string.split()
longestLength(list)