package _6_access_package;

import java.io.IOException;

public class Exception_2 {


    static void checkAge(int age) throws Exception,IOException
    {
        if (age < 18)
         {
            // throw new ArithmeticException("Access denied - You must be at least 18 years old.");
            throw new Exception("Access denied - You must be at least 18 years old.");
        } 
        
        else 
        {
            System.out.println("Access granted - You are old enough!");
        }
    }

    public static void main(String[] args) {
        try
        {

            checkAge(15); // Set age to 15 (which is below 18...)
        }

        catch(Exception e)
        {
            System.out.println("some error occured");
        }
    }
}

/* 
Throw keyword in java

The throw statement allows you to create a custom error.

The throw statement is used together with an exception type. 

There are many exception types available in Java:

ArithmeticException, FileNotFoundException, 
ArrayIndexOutOfBoundsException, SecurityException, etc:


*/