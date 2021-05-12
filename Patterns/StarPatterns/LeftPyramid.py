#      *
#     **
#    ***
#   ****
#  *****
# ******
#  *****
#   ****
#    ***
#     **
#      *
#  for n =5 

def LeftPyramid(n,symbol):
    #for the first half
    space = n+1
    for i in range(n+1):
        for j in range(space-1):
            print(" ",end="")
        space -= 1    
        #print the symbol 
        for j in range(i+1):
            print(symbol,end="")

        print("\r")

    #for the second half
    space = 1
    for i in range(0,n):
        for j in range(space):
            print(" ",end="")
        space += 1
        for j in range(n,i,-1):
            print("*",end="")
        print("\r")  




rows = int(input("rows : "))
symbol = input("symbol : ")

print("\n-------------\n")
LeftPyramid(rows,symbol)        