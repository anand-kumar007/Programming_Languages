

def function1(func):
    def wrapper():
        print("hello")
        func()
        print("welcome to pythoProgramming")

    return wrapper


def function2():
    print("pythonista")



f11 = function1(function2) # f11 points to wrapper and func points to function2 after this statement.

f11()  #this is like calling the wrapper function
