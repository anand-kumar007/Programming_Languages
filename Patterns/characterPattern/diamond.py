#     *
#    **
#   ***
#  ****
# *****

#     +

# ******
#   ****
#    ***
#     **
#      *

#  this would make the Diamond for us

def Diamond(n):
    #upper half 
    space = n
    x = 65
    for i in range(n):
        ch = chr(x)
        x = x+1
        for j in range(space-1):
            print(" ",end="")
        space -= 1

        for j in range(i+1):
            print(ch,end=" ")
        print(end=" ")    
        print("\r")


    #  lower half 
    space = 1
    x = 65
    for i in range(n):
        ch = chr(x)
        x = x+1
        for j in range(space):
            print(" ",end="")
        space += 1
        for j in range(n,i+1,-1):
            print(ch,end=" ")
        print(end=" ")    
        print("\r")



rows = int(input("Rows : "))

Diamond(rows)