class Parrot:

    # class attribute
    species = "bird"

    # instance attribute
    def __init__(self, name, age):
        self.name = name
        self.age = age

# instantiate the Parrot class
blu = Parrot("Blu", 10)
woo = Parrot("Woo", 15)

# access the class attributes
print("Blu is a {}".format(blu.__class__.species))
print("Woo is also a {}".format(woo.__class__.species))

# access the instance attributes
print("{} is {} years old".format( blu.name, blu.age))
print("{} is {} years old".format( woo.name, woo.age))


# ==============================================
#     Methods (functions defined inside the class)
#     reprsents the behaviours of class objects
# ===============================================

class Parrot:
    
    # instance attributes
    def __init__(self, name, age):
        self.name = name
        self.age = age
    
    # instance method
    def sing(self, song):
        return "{} sings {}".format(self.name, song)

    def dance(self):
        return "{} is now dancing".format(self.name)

# instantiate the object
blu = Parrot("Blu", 10)

# call our instance methods
print(blu.sing("'Happy'"))
print(blu.dance())


# ==========================================
#  Inheritance 
# ============================================

# parent class
class Bird:
    
    def __init__(self):
        print("Bird is ready")

    def whoisThis(self):
        print("Bird")

    def swim(self):
        print("Swim faster")

# child class
class Penguin(Bird):

    def __init__(self):
        # call super() function
        super().__init__()
        print("Penguin is ready")

    def whoisThis(self):
        print("Penguin")

    def run(self):
        print("Run faster")

peggy = Penguin()
peggy.whoisThis()
peggy.swim()
peggy.run()

"""
output : 

Bird is ready
Penguin is ready
Penguin
Swim faster     
Run faster 

"""

# ================================================================================================
#                           Encapsulation

# Using OOP in Python, we can restrict access to methods and variables. 
# This prevents data from direct modification which is called encapsulation. 
# In Python, we denote private attributes using underscore as the prefix i.e single _ or double __. 

# ==================================================================================================

class Computer:

    def __init__(self):
        self.__maxprice = 900

    def sell(self):
        print("Selling Price: {}".format(self.__maxprice))

    def setMaxPrice(self, price):
        self.__maxprice = price

c = Computer()
c.sell()

# change the price
c.__maxprice = 1000   #will not change the maxPrice since it is private data member
c.sell()

# using setter function
c.setMaxPrice(1000)
c.sell()

"""
output : 

Selling Price: 900
Selling Price: 900
Selling Price: 1000
"""


# =====================================================
#          Polymorphism 

# Polymorphism is an ability (in OOP) to use a common 
# interface for multiple forms (data types).

# Suppose, we need to color a shape, there are multiple
# shape options (rectangle, square, circle). 
# However we could use the same method to color any shape. 
# This concept is called Polymorphism.

# ====================================================

class Parrot:

    def fly(self):
        print("Parrot can fly")
    
    def swim(self):
        print("Parrot can't swim")

class Penguin:

    def fly(self):
        print("Penguin can't fly")
    
    def swim(self):
        print("Penguin can swim")

# common interface
def flying_test(bird):
    bird.fly()

#instantiate objects
blu = Parrot()
peggy = Penguin()

# passing the object
flying_test(blu)
flying_test(peggy)

"""
output :
Parrot can fly
Penguin can't fly

"""

