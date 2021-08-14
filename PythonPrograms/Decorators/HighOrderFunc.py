"""
Because functions are objects we can pass them as arguments to other functions. Functions that can accept other functions as arguments are also called higher-order functions.
"""
def shout(text):
    return text.upper()

def whisper(text):
    return text.lower()

def greet(func):
    #storing the function in a variable
    greeting = func("hi, I am created by a function passed as an argument")
    print(greeting)        


greet(shout) #note here that func will point to shout now.

greet(whisper)