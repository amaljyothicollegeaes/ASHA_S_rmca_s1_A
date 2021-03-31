rows = int(input("Enter the number of rows: "))
for i in range(1, rows+1):
    for j in range(1, i + 1):
        # It prints multiplication or row and column
        print(i * j, end='  ')
    print()