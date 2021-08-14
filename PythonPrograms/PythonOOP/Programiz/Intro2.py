# You may have noticed the self parameter in function definition inside the class but we called the method simply as harry.greet() without any arguments. It still worked.

# This is because, whenever an object calls its method, the object itself is passed as the first argument. So, harry.greet() translates into Person.greet(harry).

class Person:
    "This is a person class"
    age = 10

    def greet(self):
        print('Hello')


# create a new object of Person class
harry = Person()

# Output: <function Person.greet>
print(Person.greet)

# Output: <bound method Person.greet of <__main__.Person object>>
print(harry.greet)

# Calling object's greet() method
# Output: Hello
harry.greet()