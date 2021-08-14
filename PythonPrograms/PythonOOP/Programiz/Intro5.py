# multilevel inheritance and multiple inheritance

# MRO tells which method to run when you have complicated structure of inheritance
# in case of method overriding and all

"""
In the multiple inheritance scenario, any specified attribute is searched first in the current class. If not found, the search continues into parent classes in depth-first, left-right fashion without searching the same class twice.

So, in the above example of MultiDerived class the search order is [MultiDerived, Base1, Base2, object]. This order is also called linearization of MultiDerived class and the set of rules used to find this order is called Method Resolution Order (MRO).

MRO must prevent local precedence ordering and also provide monotonicity. It ensures that a class always appears before its parents. In case of multiple parents, the order is the same as tuples of base classes.

MRO of a class can be viewed as the __mro__ attribute or the mro() method. The former returns a tuple while the latter returns a list.

"""

class Base1:
    pass

class Base2:
    pass

class MultiDerived(Base1, Base2):
    pass


# multiple inheritance __mro__ is tuple and mro() is function
print(MultiDerived.mro())  # print(MultiDerived.__mro__)  

# output :
#  (<class '__main__.MultiDerived'>, <class '__main__.Base1'>, <class '__main__.Base2'>, <class 'object'>)


"""
============================================
Multilevel Inheritance 
==========================================
"""
class Base:
    pass

class Derived1(Base):
    pass

class Derived2(Derived1):
    pass

print(Derived2.__mro__)  

# output :
#  (<class '__main__.Derived2'>, <class '__main__.Derived1'>, <class '__main__.Base'>, <class 'object'>)


#  second more complex 

# Demonstration of MRO

class X:
    pass


class Y:
    pass


class Z:
    pass


class A(X, Y):
    pass


class B(Y, Z):
    pass


class M(B, A, Z):
    pass

"""
    X       Y       Z
    |       |       |
    |       |       | 
     \     / \     / |
      \   /   \   /  |
        A       B    |
        |       |    | 
        |       |    |
        |       |   /
         \     /   /
          \   /   /
            M  __/ 

"""
# Output:
# [<class '__main__.M'>, <class '__main__.B'>,
#  <class '__main__.A'>, <class '__main__.X'>,
#  <class '__main__.Y'>, <class '__main__.Z'>,
#  <class 'object'>]

print(M.mro())


# working example of MRO 

class A :
    num = 10

class B(A) :
    pass

class C(A):
    num = 1

class D(B,C):
    pass 


print(D.num) 
#what will happen ? 


#      A 
#     /  \
#    /    \
#    B     C 
#    \     /
#     \   /
#       D       MRO says : go D->B->C->A 


# check the MRO if you want or draw the graph
print(D.mro())


# writing this kind of inheritance structure is a bad coding practice and MRO is calculated based on DFS algorithm
# and keep on changing as the newer verisons of Pythons comes time to time 

# so no need to worry much 