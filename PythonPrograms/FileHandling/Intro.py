# There are only two types of python files in python one is Binary file and other is text file.

# each line of the text file is terminated with eol i.e end of line character.

# anything which is not text file is a binary file we say assume. 

# file handing is just the CRUD operation on file.

# CRUD stands for CREATE, READ, UPDATE,DELETE

# general operation could be defined as

# create file --> open file --> work on file -->close file 

# creation can be done manually or using python,
# for opening open(filename,mode)
# filename -    extension of file also should be given.

# mode - 'r'--> open a file for reading, error if  
#               file doesn't exists
#      - 'a'--> open a file for appending, create a 
#               file if doesn't exists
#      - 'w'--> open a file for writing, create the 
#               file if doesn't exists.
#      - 'x'--> create the specified file, erro if 
#               file already exists.

#  read mode is the default one 
#  additionally you can specify how the file should be handled like as a binary or text using 
#  "t" --> text mode which is default. 
#  "b" --> binary mode like for images.

# By now we know how to create and open a file in python.
# Let’s see operation on python files.
# 1.	Reading a text file.
# File.read()
# We can read an entire file or read a few character.
# File = open(“filename.text”,”r”)
# Print file.read()
import os

""" file handling example1 """

mydir = "C:/Users/Sam/Desktop/Python/codes/FileHandling"
myfile = 't1.txt'
filePath = os.path.join(mydir, myfile)
file = open(filePath,"r")
# print(file.read())
print(file.read(5)) # first five character of file
file.close()


print("---------------")

""" file handling example2 """
file = open("C:/Users/Sam/Desktop/Python/codes/FileHandling/t1.txt","r")
# print(file.read())
print(file.read(5))

file.close()

file = open("C:/Users/Sam/Desktop/Python/codes/FileHandling/t1.txt","r")

print("\n---line by line reading and only first line is read ------\n")
print(file.readline())

print("\n---line by line reading separately ------\n")
print(file.readlines())
file.close()

file = open("C:/Users/Sam/Desktop/Python/codes/FileHandling/t1.txt","r")

print("\n---reading line3 ------\n")
print(file.readlines(3))
file.close()


""" looping over file object """

print("\n---- Looping over file object ------\n")
file = open("C:/Users/Sam/Desktop/Python/codes/FileHandling/t1.txt","r")

for line in file:
    print(file.readlines())

file.close()


#f = open("demofile.txt", "rt") this is default.