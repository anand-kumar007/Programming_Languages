package _5_OOPS_Concepts;

/*
Why And When To Use Interfaces?
1) To achieve security - hide certain details and only show the important details of an object (interface).

2) Java does not support "multiple inheritance" (a class can only inherit from one superclass). However, it can be achieved with interfaces, because the class can implement multiple interfaces. Note: To implement multiple interfaces, separate them with a comma (see example below).

*/


// every method by default will be public and abstract in inherface
// so all methods has to be abstract we cannot define any method 
// in interface

// we can define the reference of interface (but not the object)
// Animal_1 a1 = new Pig_1();
// a1.sleep();   
// this code is ok

// Interface
interface Animal_1 {
    public void animalSound(); // interface method (does not have a body)

    public void sleep(); // interface method (does not have a body)
}

// Pig "implements" the Animal interface
class Pig_1 implements Animal_1 {
    public void animalSound() {
        // The body of animalSound() is provided here
        System.out.println("The pig says: wee wee");
    }

    public void sleep() {
        // The body of sleep() is provided here
        System.out.println("Zzz");
    }
}

class Interface {
    public static void main(String[] args) {
        Pig_1 myPig = new Pig_1(); // Create a Pig_1 object
        myPig.animalSound();
        myPig.sleep();

        //a referce of interface is being created here
        Animal_1 a1 = new Pig_1();
        a1.sleep();
    }
}

/*
No, we can't create an object of an abstract class(or interface ). But we can create a reference variable of an abstract class(or interface). 

The reference variable is used to refer to the objects of derived classes (subclasses of abstract class)

*/


/* 

Notes on Interfaces:
Like abstract classes, interfaces cannot be used to create objects (in the example above, it is not possible to create an "Animal" object in the MyMainClass)

Interface methods do not have a body - the body is provided by the "implement" class

On implementation of an interface, you must override all of its methods

Interface methods are by default abstract and public

Interface attributes are by default public, static and final

An interface cannot contain a constructor (as it cannot be used to create objects)

*/

/* 
Interfaces are used to implement abstraction. So the question arises why use interfaces when we have abstract classes?

The reason is, abstract classes may contain non-final variables, whereas variables in interface are final, public and static.

It is also used to achieve loose coupling.


*/