package _3_Arrays;

public class string_buffer {
        
public static void main(String[] args) {
    
    // string_buffer s1 = new string_buffer();
    // this string_buffer is not defined error use the correct spelling

    // s1 = "Hello all how are you!!"; //error cannot conver string to string_buffer
    // s1 = (string_buffer)"Hello all how are you!!"; //even casting of string==> string_buffer is not possible 

    StringBuffer s2 = new StringBuffer("Anand");
    // s2 = "hah"; //error
    System.out.println(s2);


    //1. append(any data type it can append)
    s2.append(" Kumar");

    //2.insert (add sting @ specified location)
    s2.insert(0, "Hello ");

    // Hello Anand Kumar
    System.out.println(s2);


    // 3. replace (stIdx,endIdx,"newStr") 
    s2.replace(0, 6, "Hi ");

    // Hi Anand Kumar
    System.out.println(s2);

    // 4. deltete(stIdx,endIdx or can say how many char to delelte)
    s2.delete(0,3);

    // Anand Kumar
    System.out.println(s2);

    // 5. reverse and 6.capacity
    // s2 = s2.reverse();    
    s2.reverse();   //Both are valid
    System.out.println(s2);

    //Anand Kumar's capacity is 21
    System.out.println(s2.capacity()); 
    //initially it reserves 16 characters and then keep of incrmenting
    //accordingly

    // ============================ StringBuilders ======================

    // all functionality are same but they are not synchronised 
    //and hence multiple threads can work upon them simultaneously
    //and hence faster than stringbuffers and recommended more than stringbuffers
    
    //accessed by single thread 
    
    //Hence for single threaded applications stringBuilders are preffered
    System.out.println("----------------------------------\n");

    StringBuilder str = new StringBuilder("Happy Coding");
    System.out.println(str);

    str.reverse();
    System.out.println(str);

}
 }


/*

java string buffers are used to create mutable strings
memory allocated to strings is not fixed, it can change(using certain methods)

it is synchronous in nature ie Thread Safe 
can be accessed by multiple threads 
hence maintains synchronisibility

accessed by single thread at a time

*/

