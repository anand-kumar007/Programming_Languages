# *  *   
# * *    
# **     
# *      
# **     
# * *    
# *  *   
# draw a k shape pattern


def KShape(n):
    for i in range(7):
        for j in range(7):
            if j==0 or i-j==3 or i+j == 3:
                print("*",end="")
            else:
                print(end=" ")    
        print("\r")
    

KShape(7)    