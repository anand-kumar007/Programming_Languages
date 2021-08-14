"""
The map() function executes a specified function for each item in an iterable. The item is sent to the function as a parameter.

synatax : map(function,iterables)

"""
def myfunc(a):
  return len(a)

x = map(myfunc, ('apple', 'banana', 'cherry'))

print(x) #map object 

#convert the map into a list, for readability:
# your choice convert it into tuple also
print(list(x))


"""
lambda within the map function
"""
mylist = [1,2,34,44,12,30,10,1211]

p = list(map(lambda a : a%3 ==0, mylist))

print(p)


# output = map(lambda x : x+3 ,[1,2,3,4])
# output = 4,5,6,7 


"""
lambda within reduce function

import functools 
or from functools import reduce
or from functools import *

syntax : reduce(funtion, sequence)
"""

from functools import reduce

print(reduce(lambda a,b : a+b, [10,20,30,40,50]))


"""
some more uses of lambda in algebar
"""

s = lambda a : a*a
s(10)


# 3x+y
d = lambda x,y: 3*x + 4*y
d(2,3)

#(a+b)^2

x = lambda a,b:(a+b)**2
x(10,23)


