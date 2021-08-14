package _1_CORE;
public class data_type {

    public static void main(String args[])
    {
        byte b = 10;
        short sh = 100;
        int i=30;
        long l=102;
        float f = 33f;
        double d = 78d;
        char ch = 'A';
        boolean bin=true;

        String str = "Hello";

        System.out.println(b + " "+ sh + " " + i + " " + l + " " + f + " " + d + " " + ch + " " + bin + " " + str);

        String s = "232";
        // int num = Integer.valueOf(s);
        int num = Integer.parseInt(s);

        int num2 =121;
        // String st = Integer.toString(num2);
        String st = String.valueOf(num2);

        System.out.println(num + " " + st);

    }
    
}

/*
java supports 8 primitive data types
1. byte
2. short(range is equal to int of c++)
3. int
4. long
5. float
6. double
7. char(size of 2 bytes unlike c++ 1 bytes)
8. boolean 

and String and Arrays are non-primitive or obj type data types

NOTE
reference or non-primitive variables holds bits that
represents a way to access an object

- it doesn't hold the object itself, rather it holds  a reference address to that object 

- remember java dosen't gives you access to pointer that's why reference

- non-primitve types doesn't have size or bit-range
*/

/*
type casting is similar to c++
except

1. String to int
    Integer.parseInt(string);
    Integer.valueOf(string);

2. int to String
    Integer.toString(num)
    String.valueOf(num)

and many other functions !!

*/

/* 
    all operators are are similar to the C++ only!!!
*/