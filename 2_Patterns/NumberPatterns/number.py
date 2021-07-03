# 1
# 22
# 333
# 4444
# 55555
# 666666
# 7777777

# draw it


def NumberPattern(n):
    x = 1
    for i in range(n):
        for j in range(i+1):
            print(x,end="\t")
        x += 1
        print("\r") 

rows = int(input("Rows : "))
NumberPattern(rows)        




# just change the symbol to number for diamond and half traingel etc. all would be same.