package _5_OOPS_Concepts;

//Java program to demonstrate different
// ways of initializing a final variable

class XYZ {

    final int THRESHOLD = 5;

    // a blank final variable
    final int CAPACITY;

    final int MINIMUM;

    // a final static variable PI
    // direct initialize
    static final double PI = 3.141592653589793;

    // a blank final static variable
    static final double EULERCONSTANT;

    // instance initializer block for
    // initializing CAPACITY
    {
        CAPACITY = 25;
    }

    // static initializer block for
    // initializing EULERCONSTANT
    static {
        EULERCONSTANT = 2.3;
    }

    // constructor for initializing MINIMUM
    // Note that if there are more than one
    // constructor, you must initialize MINIMUM
    // in them also
    public XYZ() {
        MINIMUM = -1;
    }

}

public class final_keyword {
    
   public static void main(String[] args) {
       XYZ obj1 = new XYZ();

       int x = obj1.CAPACITY;

       System.out.println(x);

       final int y;
       // y=19; //would give and error
       {
           y = 19; //Ok
       }

       System.out.println(y);


         int arr[] = {1, 2, 3};
          
        // final with for-each statement
        // legal statement
        for (final int i : arr)
            System.out.print(i + " ");
   }
}

/*
 * 
  non access modifier appliable to only 1. variables 2. methods 3. class
  
  
  1. final variables --> const variables 
  2. final class --> prevent inheritance final
  3. method --> prevent method overloading
  
  class ,methods, instance variables, class variables, local variables 

  method parameters


  if class is final then it cannot have child classes
 
 */