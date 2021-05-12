# super function calls the parent class methods directly

class Parent :
    def fun1(self):
        print("function 1")   

class Child(Parent):
    def fun2(self):
        
        super().fun1()
        print("function 2")


obj = Child()

obj.fun2()