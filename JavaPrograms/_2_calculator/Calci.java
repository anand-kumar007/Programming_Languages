package _2_calculator;
// name of file and that of class must be same

public class Calci   {
    public Integer add(int a, int b)
    {
        return a+b;
    }
    //call by value and function overloading example    
    public Integer add(int a, int b,int c) {
        return a + b+c;
    }

    public float multiply(short a, short b)
    {
        return a*b;
    }

     public float divide(short a, short b)
    {
        return (a>b ? a/b : b/a);
    }

    public short subtract(short a, short b)
    {
        return (short)(a-b);
    }

    public static void main(String args[])
    {
        short num1 = 10;
        short num2 = 4;
        Calci obj1 = new Calci();
        System.out.println("num1 : "+ num1 + "\nnum2 : "+ num2);
        System.out.println("num1 + num2 = "  + obj1.add(num1,num2) + 
                            "\nnum1 - num2 = "+obj1.subtract(num1, num2) + 
                            "\nnum1 * num2 = "+ obj1.multiply(num1, num2) + 
                            "\nnum1 / num2 = " + obj1.divide(num1, num2)
                            );
    
    }
}





/*
 * WRAPPER CLASS IN JAVA 
 * A Wrapper class is a class whose object wraps or contains primitive data
 
 * types. When we create an object to a wrapper class, it contains a field and
 * in this field, we can store primitive data types. In other words, we can wrap
 * a primitive value into a wrapper class object.
 * 
 * Need of Wrapper Classes
 * 
 * They convert primitive data types into objects. Objects are needed if we wish
 * to modify the arguments passed into a method (because primitive types are
 * passed by value). The classes in java.util package handles only objects and
 * hence wrapper classes help in this case also. Data structures in the
 * Collection framework, such as ArrayList and Vector, store only objects
 * (reference types) and not primitive types. An object is needed to support
 * synchronization in multithreading.
 * 
 * 
 */
/*
In Java, int is a primitive data type while Integer is a Wrapper class.

int, being a primitive data type has got less flexibility. We can only store the binary value of an integer in it.
Since Integer is a wrapper class for int data type, it gives us more flexibility in storing, converting and manipulating an int data.
Integer is a class and thus it can call various in-built methods defined in the class. Variables of type Integer store references to Integer objects, just as with any other reference (object) type.


// Valid
int n = 20;
//valid
Integer n = 45;

// Valid
Integer.parseInt("10");
// Not Valid
int.parseInt("10");

*/

