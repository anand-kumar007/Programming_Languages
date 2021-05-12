""" In python everything is treated as object including all the datatypes, functions too.

therefore a function is also known as a first-class object and can be passed around as argument.

inner-function : it is possible to define functions inside a function. that function is called an inner function.
"""
"""
A function can take multiple arguments, these arguments can be objects, variables(of same or different data types) and functions. Python functions are first class objects. 

In the example below, a function is assigned to a variable. 

This assignment doesn’t call the function. It takes the function object referenced by shout and creates a second name pointing to it, yell.
"""
def shout(text):
    return text.upper()

print(shout("hello"))

yell = shout #note that it its not a function call rather it creates a second name pointing to shout function ie yell here.

print(yell('Programmers'))