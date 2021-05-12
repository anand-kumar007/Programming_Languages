# *
# **
# ***
# ****
# *****
# ******
# *****
# ****
# ***
# **
# *



def RightPyramid(n,symbol):
    #for the first half
    for i in range(n+1):
        #print the symbols 
        for j in range(i+1):
            print(symbol,end="")
        print("\r")

    #for the second half
    for i in range(n):
        for j in range(n,i,-1):
            print("*",end="")
        print("\r")    


rows = int(input("rows : "))
symbol = input("symbol : ")

print("\n-------------\n")
RightPyramid(rows,symbol)







# def pattern(n):
#     for i in range(0,n):
#         for j in range(0,i+1):
#             print("* ",end="")
#         print("\r")

#     for i in range(n,-1,-1):
#         for j in range(0,i+1):
#             print("* ",end="")
#         print("\r")



# pattern(5)                     