# when one function is defined another function we say it is inner function 

def fun1():
    print("first function")
    def fun11():
        print("first child of fun1")

    def fun12():
        print("second child of fun1")

    fun12()
    fun11()

fun1()


# python decorators revolves around first-class objects ie functions and innner-function(nested functions)


# returning the function 

def func1(n):
    def fun11():
        return "fun11"
    def fun12():
        return "fun12"
    if(n==1):
        return fun11()
    elif(n==2):
        return fun12()
    else:
        return "sorry"

a = func1(1)
b = func1(2)
c= func1(4)

print(a)
print(b)
print(c)