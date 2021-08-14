package _8_Collections_in_Java;

import java.util.*;


/* 

ArrayList: ArrayList provides us with dynamic arrays in Java. Though, it may be slower than standard arrays but can be helpful in programs where lots of manipulation in the array is needed. The size of an ArrayList is increased automatically if the collection grows or shrinks if the objects are removed from the collection. Java ArrayList allows us to randomly access the list. 

ArrayList can not be used for primitive types, like int, char, etc. We will need a wrapper class for such cases.  

*/
public class ArrayLists {

    public static void main(String[] args) {

        //note tha wrapper classes is being used

        ArrayList<Integer> al = new ArrayList<Integer>();

        // Appending new elements at
        // the end of the list
        for (int i = 1; i <= 5; i++)
            al.add(i);

        // Printing elements
        System.out.println(al);

        // Remove element at index 3
        al.remove(3);

        // Displaying the ArrayList
        // after deletion
        System.out.println(al);

        // Printing elements one by one
        for (int i = 0; i < al.size(); i++)
            System.out.print(al.get(i) + " ");
    }
}

// [1, 2, 3, 4, 5]
// [1, 2, 3, 5]
// 1 2 3 5 


/*

Iterator interface
Iterator interface provides the facility of iterating the elements in a forward direction only.

1. public boolean hasNext()
It returns true if the iterator has more elements otherwise it returns false.

2. public Object next()
It returns the element and moves the cursor pointer to the next element.

3. public void remove()

	It removes the last elements returned by the iterator. It is less used.


*/

/* 
Collection Interface
The Collection interface is the interface which is implemented by all the classes in the collection framework. It declares the methods that every collection will have. In other words, we can say that the Collection interface builds the foundation on which the collection framework depends.

Some of the methods of Collection interface are Boolean add ( Object obj), Boolean addAll ( Collection c), void clear(), etc. which are implemented by all the subclasses of Collection interface.

List Interface
List interface is the child interface of Collection interface. It inhibits a list type data structure in which we can store the ordered collection of objects. It can have duplicate values.

List interface is implemented by the classes ArrayList, LinkedList, Vector, and Stack.

To instantiate the List interface, we must use :

List <data-type> list1= new ArrayList();  
List <data-type> list2 = new LinkedList();  
List <data-type> list3 = new Vector();  
List <data-type> list4 = new Stack();  

*/ 