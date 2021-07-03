"""
Without the try block, the program will crash and raise an error:

"""
#The try block will generate an error, because x is not defined:
# x=10
try:
  print(x)
except NameError:
  print("Variable x is not defined")
except:
  print("Something else went wrong")
else:
  print("Nothing went wrong")  
finally:
  print("The 'try except' is finished")


# The finally block, if specified, will be executed 
# regardless if the try block raises an error or not.



#  raising the Exception

x = -1

if x < 0:
  raise Exception("Sorry, no numbers below zero")

# The raise keyword is used to raise an exception.

# You can define what kind of error to raise, and the text to print to the user.

x = "hello"

if not type(x) is int:
  raise TypeError("Only integers are allowed")
