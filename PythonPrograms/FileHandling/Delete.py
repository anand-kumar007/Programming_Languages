# os.remove() filesystem is used for deleting the file
# you must check the filePath if it exists before deleting
# os.rmdir("folderName")  for deleting the folder


import os

files = ['new1.txt','new2.txt','new3.txt']

for x in files:
    os.remove(x)

# if os.path.exists("C:/Users/sam/desktop/python/fileHandling/t3.txt"):
#     print("removing the file")
#     os.remove("C:/Users/sam/desktop/python/fileHandling/t3.txt")
# else :
#     print("file doesn't exists")    


# with all the content inside it can be deleted using the rmidir
# os.rmdir("folderName")