# Reverse pyramid
# *****
# ****
# ***
# **
# *

#range(start, stop, step)

def Rpyramid(n,symbol):
    for i in range(0,n):

        for j in range(n,i,-1):
            print(symbol," ",end="")

        print("\r")


rows = int(input("rows : "))
symbol = input("symbol : ")

print("\n-------------\n")
Rpyramid(rows,symbol)               



