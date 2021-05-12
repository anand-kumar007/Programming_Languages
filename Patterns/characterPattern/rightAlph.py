# A
# BB
# CCC
# DDDD
# EEEEE
# FFFFFF

# draw this for rows = 6

def alphTraingle(n):
    x=65
    for i in range(n):
        ch = chr(x) #notice it's chr not char
        x += 1
        for j in range(i+1):
            print(ch,end=" ")

        print("\r")    

rows = int(input("rows : "))
alphTraingle(rows)        