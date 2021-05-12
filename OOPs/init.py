# init function is called everytime whenever an object is created for a class. 

class Parent :
    def __init__(self,fname,age):
        self.name = fname
        self.age = age

    def view(self):

        print(self.name,self.age)   

class Child(Parent):
    def __init__(self,fname,age):
        Parent.__init__(self,fname,age)

        self.signature = "@@@"

    def view(self):
        print(self.age,self.name,self.signature)



obj1 = Child("Sam",20)
obj2 = Child(18,"Siya")

obj1.view()
print("\n-----\n")
obj2.view()
        

        