# draw the Pascal triangle pattern

def Pascal(n):
    for i in range(n):
        for j in range(i+1):
            print(fun1(i,j)," ",end="")
        print("\r")    


# this is the logic for pascal number.ie binomial coffiecient nCk = n!/k!*(n-k)! or nCn-k   
def fun1(n,k):
    res = 1
    if(k > n-k):
        k = n-k;
    for i in range(k):
        res = res * (n-i)
        res = res //(i+1)
    return res 


Pascal(7)                     


# Python program to calculate C(n, k)

# Returns value of Binomial Coefficient
# C(n, k)
def binomialCoefficient(n, k):
	# since C(n, k) = C(n, n - k)
	if(k > n - k):
		k = n - k
	# initialize result
	res = 1
	# Calculate value of
	# [n * (n-1) *---* (n-k + 1)] / [k * (k-1) *----* 1]
	for i in range(k):
		res = res * (n - i)
		res = res / (i + 1)
	return res

# Driver program to test above function
n = 8
k = 2
res = binomialCoefficient(n, k)
print("Value of C(% d, % d) is % d" %(n, k, res))


