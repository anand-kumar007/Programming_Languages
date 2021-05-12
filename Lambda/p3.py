# lambda within filter() function 

# syntax : filter(function, iterables)

"""
The filter() function returns an iterator were the items are filtered through a function to test if the item is accepted or not.

"""
ages = [5, 12, 17, 18, 24, 32]

def myFunc(x):
  if x < 18:
    return False
  else:
    return True

adults = filter(myFunc, ages)

for x in adults:
  print(x)


"""
lambda within filter
"""

mylist = [3,12,61,6,13,44,1223]

newlist = list(filter(lambda a : (a%3 == 0), mylist))

print(newlist)