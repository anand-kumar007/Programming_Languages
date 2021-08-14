package _6_access_package;

public class Exception_3 {
    static void fun() {
        try {
            throw new NullPointerException("demo");
        } catch (NullPointerException e) {
            System.out.println("Caught inside fun().");
            throw e; // rethrowing the exception
        }
    }

    public static void main(String args[]) {
        try {
            fun();
        } catch (NullPointerException e) {
            System.out.println("Caught in main.");
        }
    }
    
}

// Java program to illustrate error in case
// of unhandled exception
class tst {
    public static void main(String[] args) {
        // Thread.sleep(10000);
        System.out.println("Hello Geeks");
    }
}


// Explanation: In the above program, we are getting compile time error because there is a chance of exception if the main thread is going to sleep, other threads get the chance to execute main() method which will cause InterruptedException.

// Java program to illustrate throws
class tst1 {
    public static void main(String[] args) throws InterruptedException {
        Thread.sleep(10000);
        System.out.println("Hello Geeks");
    }
}

// no compile time erro now
// Explanation: In the above program, by using throws keyword we handled the
// InterruptedException and we will get the output as Hello Geeks


/* 

Important points to remember about throws keyword: 

1. throws keyword is required only for checked exception 
    and usage of throws keyword for  unchecked exception is meaningless.

2. throws keyword is required only to convince compiler and usage 
    of throws keyword does not prevent abnormal termination of program.
    
3.  By the help of throws keyword we can provide information to the caller 
    of the method about the exception.


*/


// ===============================================================================

/* 
Caught inside fun().
Caught in main.

*/

// throws on the other hand 

/* 

throws is a keyword in Java which is used in the signature of method 
to indicate that this method might throw one of the listed type exceptions. 

The caller to these methods has to handle the exception using a try-catch block. 

Syntax:  
type method_name(parameters) throws exception_list

throws is a keyword in Java which is used in the signature of method to indicate that this method might throw one of the listed type exceptions. The caller to these methods has to handle the exception using a try-catch block. 

Syntax:  

type method_name(parameters) throws exception_list

throws is a keyword in Java which is used in the signature of method to indicate that this method might throw one of the listed type exceptions. The caller to these methods has to handle the exception using a try-catch block. 

Syntax:  

type method_name(parameters) throws exception_list

------------->
exception_list is a comma separated list of all the 
exceptions which a method might throw.


*/