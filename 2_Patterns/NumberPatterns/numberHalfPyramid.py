def pattern(n):
    space = 2*n-2
    for i in range(n):
        for j in range(space):
            print(end=" ")
        space = space - 1
        for j in range(i+1):
            print('10',end="")
        print("\r")


pattern(5)                