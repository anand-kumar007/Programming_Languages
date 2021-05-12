# lambda within user defined function 

def A(x):

    return (lambda y : x+y)

t1 = A(4) #now t1 points to lambda and x = 4

print(t1(10))  # like lambda with y =10 
