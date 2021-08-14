package _4_OOP;

public class Const_Chaining {

    

        Const_Chaining() {
            // calls constructor 2
            this(5);
            System.out.println("The Default constructor");
        }

        
        Const_Chaining(int x) {
            // calls constructor 3
            this(5, 15);
            System.out.println(x);
        }

     
        Const_Chaining(int x, int y) {
            System.out.println(x * y);
        }

        public static void main(String args[]) {
            // invokes default constructor first
            new Const_Chaining();
        
    }

}



/*
The this() expression should always be the first line of the constructor.
There should be at-least be one constructor without the this() keyword (constructor 3 in above example).
Constructor chaining can be achieved in any order.

*/

/*

the process of calling one constructor from another constructor with respect to the current object
is called "COSNTRUNCTOR CHAINING"

the real purpose of consturctor chaining is to pass parameters through a bunch of different constructors, but initialization should be doen at single place

can be achieved in two ways

1. Within same class: It can be done using this() 
                      keyword for constructors in same class

2.From base class: by using super() keyword to call constructor from the base class.
                   constructor chaining occurs through inheritance


 A sub class constructor’s task is to call super class’s constructor first. 
 This ensures that creation of sub class’s object starts with the initialization 
 of the data members of the super class. 
 
 There could be any numbers of classes in inheritance chain. 
 Every constructor calls up the chain till class at the top is reached.
 

 Why do we need constructor chaining ? 
This process is used when we want to perform multiple tasks in a single constructor rather than creating a code for each task in a single constructor we create a separate constructor for each task and make their chain which makes the program more readable

*/