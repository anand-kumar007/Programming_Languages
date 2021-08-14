package _8_Collections_in_Java;

import java.util.*;

public class Vectors {

    public static void main(String[] args) {

        // Declaring the Vector
        Vector<Integer> v = new Vector<Integer>();

        // Appending new elements at
        // the end of the list
        for (int i = 1; i <= 5; i++)
            v.add(i);

        // Printing elements
        System.out.println(v);

        // Remove element at index 3
        v.remove(3);

        // Displaying the Vector
        // after deletion
        System.out.println(v);

        // Printing elements one by one
        for (int i = 0; i < v.size(); i++)
            System.out.print(v.get(i) + " ");
    }
    
}

// [1, 2, 3, 4, 5]
// [1, 2, 3, 5]
// 1 2 3 5 

/* 

However, the primary difference between a vector and an ArrayList is that a Vector is synchronized and an ArrayList is non-synchronized.
they are thread safe other things are same as Arraylist 



 */