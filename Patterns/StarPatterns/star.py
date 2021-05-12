# star pyramid patterns
# half pyramid patterns
# Traingle patterns
# Hourglass patterns
# Diamond patterns
# Inverted pyramid patterns

# 1. pyramid
# *
# **
# ***
# ****
# *****

def pattern(n,symbol):
    space = n
    for i in range(0,n):
        for j in range(0,space-1):
            print(end=" ")
        

        for j in range(0,i+1):
            print(symbol,"",end="")
        print("\r") 
        space = space -1



rows = int(input("rows : "))
symbol = input("symbol : ")

print("\n-------------\n")
pattern(rows,symbol)               

