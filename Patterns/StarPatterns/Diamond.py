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

# def Diamond(n):
#     #upper half 
#     space = n
#     for i in range(n):
#         for j in range(space-1):
#             print(" ",end="")
#         space -= 1

#         for j in range(i+1):
#             print("* ",end="")
#         print(end=" ")    
#         print("\r")


#     #  lower half 
#     space = 1
#     for i in range(n):
#         for j in range(space):
#             print(" ",end="")
#         space += 1
#         for j in range(n,i+1,-1):
#             print("* ",end="")
#         print(end=" ")    
#         print("\r")



# rows = int(input("Rows : "))

# Diamond(rows)                           








# hollow diamond pattern
def HollowDiamond():
    for i in range(5):
        for j in range(5):
            if i+j ==2 or i-j ==2 or i+j ==6 or j-i ==2 :
                print("*",end="")
            else :
                print(end=" ")
        print("\r")
    

HollowDiamond()                
