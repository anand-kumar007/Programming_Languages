"""
Python Lambda functions are :
    anonmous or nameless functions
    'lambda' is not a name its a keyword.
lambda args : expression

any number of args (0-n)
"""
x = lambda a : a **2

num = int(input("Number : "))
print("sqaure is : ",x(num))


# this is not the real use of lambda , it is used in higher order function more efficiently.