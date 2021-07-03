#  * * * * *
#   * * * *  
#    * * * 
#     * *
#      *
#      *
#     * *
#    * * *
#   * * * *
#  * * * * *

# for n =5 Its an hour glass pattern

def Hourglass(n):
    #first half
    space = 0
    for i in range(n,-1,-1):
        for j in range(space):
            print(end=" ")
        space += 1    
        for j in range(i+1):
            print("* ",end="")
        
        print("\r")

    #second half
    space = n
    for i in range(n+1):
        for j in range(space):
            print(end=" ")
        space -= 1    

        for j in range(i+1):
            print("* ",end="")
        

        print("\r")


rows = int(input("Rows : "))

Hourglass(rows)
