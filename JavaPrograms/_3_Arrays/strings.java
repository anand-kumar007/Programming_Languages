package _3_Arrays;

/*
String in java,python are immutable unlike c++ where 
they can be changed !!

but in java and python strings cannot be changed once created!!

this helps us in threads when multiple threads access same string
and try to mutate it but couldn't;;

*/
public class strings {

    public static void main(String args[]) {
        // char s1[] = { 'A', 'n', 'a', 'n', 'd' };
        // String s2 = new String("sam");
        String s2 = new String();
        s2 = "jiya";
        s2 = "shyam"; // note this is not the mutation
        System.out.println(s2);

        String s3 = "Radha";
        System.out.println(s3);

        String s4 = s3.concat(s2);

        System.out.println("concat : " + s4);

        System.out.println("s4's size : " + s4.length());

        System.out.println(s4.substring(2, 5));
        System.out.println(s4.substring(2));

        System.out.println(s4.isEmpty());
        System.out.println(s4.compareTo(s3));
        // gives difference btwn first two different
        // characters

        System.out.println(s4.compareTo(s4));
        // will give zero for same strings

        System.out.println(s4.toLowerCase());
        System.out.println(s4.toUpperCase());

        // valueof mehod for converting different data types into strings

        float f1 = 12.3f;
        String sf1 = String.valueOf(f1);

        System.out.println(sf1);

        String s5 = "anand";
        s5 = s5.replace('n', 'k');
        // will replace all n with k

        System.out.println(s5);

        // searches for a pattern
        if (s5.contains("aka")) {
            System.out.println("string s5 has aka");

        }

        if(s3.equals("Radha"))
        {
        System.out.println("yes string is Radha");

        }


        //charAt
        System.out.println(" s4[2] : "+s4.charAt(2));

        //endsWith
        if("Radha is good girl".endsWith("rl"))
        {
        System.out.println("yes string ends with \"rl\" ");

        }
    }
}

/*
 * Java string is a sequence of character !! They are object of type string
 * class !! Strings in java are immutable once created cannot be changed !!
 * 
 * three ways to declare
 * 
 */

/*
 * String pool
 * 
 * string pool used in java is a pool of strings stored in java Heap memory
 * 
 * string pool is possible only because strings are immutable
 * 
 * string pool helps in saving a lot of space for java runtime
 * 
 * 
 * NOTE : the string pool can contain multiple strings but a heap memory can
 * have one string Pool
 * 
 */

// STRING MEMORY ALLOCATION

/*
 * The strings is not a primitive data type in java
 * 
 * The java strings are stored in pool of the heap area
 * 
 * 
 * When we create object of string, then obj name(variable) will be created in
 * stack portion of memroy
 * 
 * and then value we assigns to that variable will be stored in String pool
 * (portion of heap memory)
 * 
 * 
 * 
 * 
 */