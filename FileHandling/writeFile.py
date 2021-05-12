import os

# f = open("C:/Users/Sam/Desktop/Python/Codes/FileHandling/t.txt","a")
# # if file doesn't exists it will create one

# f.write(" Hello there i am appending to the last of your content.")

# f.close()

# f = open("C:/Users/Sam/Desktop/Python/Codes/FileHandling/t1.txt")
# print(f.readlines())

# f.close()


print("\n--- Initially --------\n")
f = open("C:/Users/Sam/Desktop/Python/Codes/FileHandling/t.txt")
print(f.readlines())

f.close()



f = open("C:/Users/Sam/Desktop/Python/Codes/FileHandling/t.txt","w")
# if file doesn't exists it will create one

f.write(" Hi I am gonna override your content.")
f.write("I am the second line to be written in the file.")

f.close()
print("\n--- After opeining in write mode --------\n")

f = open("C:/Users/Sam/Desktop/Python/Codes/FileHandling/t.txt")
print(f.readlines())

f.close()