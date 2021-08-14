
#!/bin/bash

# read command helps to take user input

 touch file1 file2
 
 echo -n "Enter name of file to delete(file1/file2) : "

 read file

 #file variable would hold the file to be deleted

 echo "Type 'Y' to remove else 'N' to change your mind"

 rm -i $file

 echo "Deleted the file !!"
