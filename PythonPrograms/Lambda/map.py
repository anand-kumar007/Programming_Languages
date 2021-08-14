
def new(a,b):
    return a*b

x = map(new,[2,10,23,11],[2,3,4,5])

print(x)
print(tuple(x))


"""
filter function
"""

def fun1(i):
    if i>=3:
        return i

# j = filter(fun1,(1,2,3,4,5,6))
j= filter(lambda x:x>=3, (1,2,3,4,5,6))
print(j)

print(tuple(j))


"""
reduce function it'll return a single value at the last
"""
from functools import reduce
print(reduce(lambda p,q : p*q , (1,2,3,4,5,6)))


"""
filter within map and vice versa can be used.
"""

c = map(lambda x:x+x, filter(lambda x:(x>=3),[2,3,4,5,6])
)
print(tuple(c))


d = filter(lambda x : x>=4 , map(lambda x:x+x,[1,2,3,4,5]))

print(set(d))



"""
map and filter within reduce function
"""
r = reduce(lambda x,y:x+y, map(lambda x:x+x, filter(lambda x: (x<=4),[1,2,3,4,5,6,7])))

print(r)
