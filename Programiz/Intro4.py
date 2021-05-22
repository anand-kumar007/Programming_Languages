# It refers to defining a new class with little or 
# no modification to an existing class. 

# The new class is called derived (or child) class and 
# the one from which it inherits is called 
# the base (or parent) class.


class Polygon:
    def __init__(self, no_of_sides):
        self.n = no_of_sides
        self.sides = [0 for i in range(no_of_sides)]

    def inputSides(self):
        self.sides = [float(input("Enter side "+str(i+1)+" : ")) for i in range(self.n)]

    def dispSides(self):
        for i in range(self.n):
            print("Side",i+1,"is",self.sides[i])



class Triangle(Polygon):
    def __init__(self):
        Polygon.__init__(self,3)

    def findArea(self):
        a, b, c = self.sides
        # calculate the semi-perimeter
        s = (a + b + c) / 2
        area = (s*(s-a)*(s-b)*(s-c)) ** 0.5
        print('The area of the triangle is %0.2f' %area)


class Rectangle(Polygon):
    def __init__(self):
        Polygon.__init__(self,4)

    def findArea(self):
        w1,h1,w2,h2 = self.sides 

        area = w1 * h1 or  w2 * h2
        print('The area of rectangle is %0.2f ' %area)    

# t = Triangle()
# t.inputSides()
# t.dispSides()
# t.findArea()

#for rectangel
R1 = Rectangle()
print("enter sides of rectangle accordingly : ")
R1.inputSides()
R1.dispSides()
R1.findArea()


"""
=================================
Method Overriding in Python
==================================

In the above example, notice that __init__() method was defined in both classes, Triangle as well Polygon. When this happens, the method in the derived class overrides that in the base class. This is to say, __init__() in Triangle gets preference over the __init__ in Polygon.

Generally when overriding a base method, we tend to extend the definition rather than simply replace it. The same is being done by calling the method in base class from the one in derived class (calling Polygon.__init__() from __init__() in Triangle).

A better option would be to use the built-in function super(). So, super().__init__(3) is equivalent to Polygon.__init__(self,3) and is preferred. To learn more about the super() function in Python, visit Python super() function.

Two built-in functions isinstance() and issubclass() are used to check inheritances.

The function isinstance() returns True if the object is an instance of the class or other classes derived from it. Each and every class in Python inherits from the base class object.

"""

print(isinstance(R1,Rectangle)) # True
print(isinstance(R1,Triangle))  # False
print(isinstance(R1,int))  # False 
print(isinstance(R1,object))  # True 

print(issubclass(Rectangle,Triangle))  # False
print(issubclass(Triangle,Polygon))  #True
print(issubclass(Rectangle,Polygon)) #True
print(issubclass(bool,int))       # True 


# Every class in Python is derived from the object class. It is the most base type in Python.