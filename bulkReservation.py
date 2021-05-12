# Bulk reservation for train system.

travelling = input("yes or no : ")

while travelling == "yes":
    num = int(input("No. of people travelling : "))
    
    for num in range(1,num+1):
        name = input("Name : ")
        age = input("age : ")
        sex = input("sex(male|female) : ")

        print(name," ",age," ",sex,"\n")

    travelling = input("oops forget someone !(yes|no) : ")
