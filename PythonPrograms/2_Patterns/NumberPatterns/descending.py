# 12345
# 1234
# 123
# 12
# 1

# draw this pattern

def Dpattern(n):
    for i in range(n,0,-1):
        
        for j in range(1,i+1):
            print(j,end="")
        print("\r")


rows = int(input("rows : "))

Dpattern(rows)