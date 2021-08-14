package _8_Collections_in_Java;
import java.util.*;

/* 

Stack: Stack class models and implements the Stack data structure. The class is based on the basic principle of last-in-first-out. 

In addition to the basic push and pop operations, the class provides three more functions of empty, search and peek. 

The class can also be referred to as the subclass of Vector.

*/
public class Stacks {
    public static void main(String args[]) {
        Stack<String> stack = new Stack<String>();
        stack.push("Sam");
        stack.push("is");
        stack.push("good");
        stack.push("boy");

        // Iterator for the stack
        Iterator<String> itr = stack.iterator();

        // Printing the stack
        while (itr.hasNext()) {
            System.out.print(itr.next() + " ");
        }

        System.out.println();

        stack.pop();

        // Iterator for the stack
        itr = stack.iterator();

        // Printing the stack
        while (itr.hasNext()) {
            System.out.print(itr.next() + " ");
        }
    }
    
}

/* 
Sam is good boy 
Sam is good   
*/


/* 
 Note : Stack is a subclass of Vector and a legacy class. It is thread safe which might be an overhead in an environment where thread safety is not needed. An alternate to Stack is to use ArrayDequeue which is not thread safe and faster array implementation.
*/
