#      A     
#     B B    
#    C C C   
#   D D D D  
#  E E E E E 


# draw pyramid of alphabets



def alphPyramid(n):
    x = 65
    space = n
    for i in range(n):
        # ch = chr(x)
        # x = x +1
        for j in range(space):
            print(end=" ")
        space -= 1

        for j in range(i+1):
            ch = chr(x)
            print(ch,end=" ")
            x = x +1
        print("\r")        

rows = int(input("rows : "))
alphPyramid(rows)        