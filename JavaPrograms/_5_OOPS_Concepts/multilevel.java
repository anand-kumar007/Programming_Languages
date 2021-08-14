package _5_OOPS_Concepts;

// concept of Multilevel inheritance
// import java.io.*;
// import java.lang.*;
// import java.util.*;

//change name of classes as one, two names already exists in package
class one1 {
    public void print_geek() {
        System.out.println("Geeks");
    }
}

class two2 extends one1 {
    public void print_for() {
        System.out.println("for");
    }
}

class three3 extends two2 {
    public void print_geek() {
        System.out.println("Geeks");
    }
}

// Drived class
public class multilevel {
    public static void main(String[] args) {
        three3 g = new three3();
        g.print_geek();
        g.print_for();
        g.print_geek();
    }
}
