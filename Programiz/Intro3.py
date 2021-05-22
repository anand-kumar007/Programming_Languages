"""
Class functions that begin with double underscore __ are called special functions as they have special meaning.

Of one particular interest is the __init__() function. This special function gets called whenever a new object of that class is instantiated.

This type of function is also called constructors in Object Oriented Programming (OOP). We normally use it to initialize all the variables.
"""

class ComplexNumber:
    def __init__(self, r=0, i=0):
        self.real = r
        self.imag = i

    def get_data(self):
        print(f'{self.real}+{self.imag}j')



num1 = ComplexNumber(2, 3)


# Output: 2+3j
num1.get_data()

# Create another ComplexNumber object
# and create a new attribute 'attr'
num2 = ComplexNumber(5)
num2.attr = 10

# Output: (5, 0, 10)
print((num2.real, num2.imag, num2.attr))

# but num1 object doesn't have attribute 'attr'
# AttributeError: 'ComplexNumber' object has no attribute 'attr'

#   print(num1.attr) #this would throw an error 




"""
An interesting thing to note in the above step is that 
attributes of an object can be created on the fly. 

We created a new attribute attr for object num2 and read it as well.
But this does not create that attribute for object num1.
"""

# deleting the atrributes
# Any attribute of an object can be deleted anytime, using the del statement
del num2.attr 

print((num2.real, num2.imag, num2.attr))  # this would give an error bcz no attr attribute is there for num2


del num2 #this has deleted the whole num2 object
