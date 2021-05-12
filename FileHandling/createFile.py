""" creating file using the python """
# ----------had to use the open() method for --------

# 'x' --> will make the file if not exist and this mode is for creating the specified file. and this would 
#         throw an error if the file already exists.


import os
f = open("C:/Users/sam/Desktop/python/codes/Filehandling/t3.txt","x")
f.write("new file named t3 is created")
f.close()

f = open("C:/Users/sam/Desktop/python/codes/Filehandling/t3.txt","r")

for line in f:
    print(f.readlines())

f.close()

# similarly the 'w' and 'a' mode will create the file if it doesn't exists.    