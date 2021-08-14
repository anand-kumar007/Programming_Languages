package _8_Collections_in_Java;

/* 
LinkedHashSet: A LinkedHashSet is very similar to a HashSet. The difference is that this uses a doubly linked list to store the data and retains the ordering of the elements

*/

import java.util.Iterator;
import java.util.LinkedHashSet;


public class LinkedHashSets {
    public static void main(String args[]) {
        // Creating LinkedHashSet and
        // adding elements
        LinkedHashSet<String> lhs = new LinkedHashSet<String>();

        lhs.add("coding");
        lhs.add("is");
        lhs.add("Is");
        lhs.add("Very helpful");

        // Traversing elements
        Iterator<String> itr = lhs.iterator();
        while (itr.hasNext()) {
            System.out.println(itr.next());
        }
    }  
}
