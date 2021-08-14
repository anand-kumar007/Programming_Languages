package _6_access_package;

public class Exception_1 {

    public static void main(String[] args) {
        try {
            int[] myNumbers = { 1, 2, 3 };
            System.out.println(myNumbers[10]);
        } 
        catch (NullPointerException e) {
            System.out.println("null ptr exception");
        }
        catch (ArithmeticException e) {
            System.out.println("arithmetic exception");
        }
        catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("array index out of bound exception");
        }

        //has to be last catch if Exception otherwise above two won't make sense
        catch (Exception e) {
            System.out.println("Something went wrong.");
        } finally {
            System.out.println("The 'try catch' is finished.");
        }
    }
    
}

/* 

An Exception is an Event, which occurs during the execution of a program, that disrupts the normal flow of the program's instruction.

when an exception occurs, the JVM creates an exception object to identify the type of exception
that has occured.

An exception is often to referred as Runtime Error

it's programmer's choice whether to handle the exception or throw it to next calle
function. using throw keyword

all sorts of exceptions are subset of Exception class

like arithmetic, nullptr etc all

so we generally use 

catch(Exception e)
{

}
rather than specifying all other exceptions individually.


similarly we can use nesting and multiple catch block etc depending on requirement

*/