"""
Functions in Python are first-class objects. First-class objects in a language are handled uniformly throughout. They may be stored in data structures, passed as arguments, or used in control structures.

"""

"""
Properties of first-class functions:

A function is an instance of the Object type.

You can store the function in a variable.

You can pass the function as a parameter to another function.

You can return the function from a function.

You can store them in data structures such as hash tables, lists, …

"""

def B():
    print("Inside method B")

def A():

    print("inside method A")

    #return second method
    return B

#form a object of first method 
# ie. second method

func = A()
# output : inside method A

# now func points to B method 

func() 
#output : inside method  B



""" -----------more easy way---------- """

def B1(str2):
    print("Good "+ str2 + ".")

def A1(str1,str2):
    print(str1 + " and ", end="")

    #retrun second method
    return B1(str2)


A1("hello","Morning")    

