package _5_OOPS_Concepts;

class Animals {
    void eat() {
        System.out.println("Animals Eat");
    }
}

class herbivores extends Animals {
    void eat() {
        System.out.println("Herbivores Eat Plants");
    }
}

class omnivores extends Animals {
    void eat() {
        System.out.println("Omnivores Eat Plants and meat");
    }
}

class carnivores extends Animals {
    void eat() {
        System.out.println("Carnivores Eat meat");
    }
}



public class method_overriding {
    public static void main(String args[]) {
        Animals A = new Animals();
        Animals h = new herbivores(); // upcasting
        Animals o = new omnivores(); // upcasting
        Animals c = new carnivores(); // upcasting
        A.eat();
        h.eat();
        o.eat();
        c.eat();

    }
}


/*  

Animals Eat
Herbivores Eat Plants        
Omnivores Eat Plants and meat
Carnivores Eat meat

*/


/* 
What is Method Overriding in Java?
Method overriding is defined as a process when the subclass or a child class has the same method as declared in the parent class

Also,
Polymorphism in java can be classified into two types:

Static / Compile-Time Polymorphism
Dynamic / Runtime Polymorphism

1. static/ compile polymorphism

    method overloading and operator overlaoding
    BUT
    JAVA DOESN'T SUPPORTS OPERATOR OVERLOADING

2. dynamic/ runtime ploymorphism

    method overriding
    

Method Overriding is done when a child or a subclass has a method with the same name, parameters and return type as the parent or the superclass, then that function overrides the function in the superclass. In simpler terms, if the subclass provides its definition to a method already present in the superclass, then that function in the base class is said to be overridden.

NOTE : runtime polymorphism can only be achieved through methods not using data;


Upcasting is done when the Parent class’s reference variable refers to the object of the child class. For example:

class A{} 
class B extends A{}  
A a=new B(); //upcasting


*/