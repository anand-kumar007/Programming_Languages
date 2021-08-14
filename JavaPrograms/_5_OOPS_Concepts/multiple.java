package _5_OOPS_Concepts;

/*
 java doesnot supports multiple inheritance and hence we are abide to use
 interface to achieve the multiple inheritance

*/

// Java program to illustrate the
// concept of Multiple inheritance
// import java.io.*;
// import java.lang.*;
// import java.util.*;

interface one_1 {
    public void print_geek();
}

interface two_2 {
    public void print_for();
}

interface three_3 extends one_1, two_2 {
    public void print_geek();
}

// we must override all the methods of interfaces in 
// inherited classes

class child implements three_3 {
    @Override
    public void print_geek() {
        System.out.println("Geeks");
    }

    public void print_for() {
        System.out.println("for");
    }
}

// Drived class
public class multiple {
    public static void main(String[] args) {
        child c = new child();
        c.print_geek();
        c.print_for();
        c.print_geek();
    }
}
