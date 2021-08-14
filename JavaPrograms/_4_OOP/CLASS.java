package _4_OOP;

public class CLASS {

    final static Integer CST = 10;
    private int data;

    // constructor
    CLASS(int x) {
        data = x;

    }

    CLASS() {
        // data = 0;
        // will initialize them to default value

    }

    public int add(int x, int y) {
        return (data + x + y);
    }

    public static void main(String[] args) {

        CLASS d1 = new CLASS(10);
        CLASS d2 = new CLASS();

        System.out.println("d1's score : " + d1.add(10, 20));
        System.out.println("d2's score  : " + d2.add(100, 200));
    }

}

/*
 * Java is an Object Oriented and Class based programming language
 * ===============================
 * 
 * class : A class is a blueprint which includes all the data. It describes the
 * state and behaviour of a specific object.
 * 
 * Object : An object is an instance of class which contains variables and
 * methods.
 * 
 * Phone is a class ==> rotatary phone, touch tone phone and cellular phone are
 * the Objects of the class.
 * 
 * 
 * ============================== Attributes
 * 
 * "In computing, an attribute is a specification that defines a property of an object, elements, or file."
 * 
 * 
 * There are 2 types of attributes : 1. Built in class attributes 2. attributes
 * defined by users
 * 
 * 
 * ================================= constructor
 * 
 * used in cretion of an object it is the block of code used to initialize an
 * object
 * 
 * Constructor must have same name as class andit doesn not have any return type
 * 
 * constructor gets executed when an object of a class is being created
 * 
 * constructor are of two type ; 1. default 2. paramterized
 * 
 * all done by JVM
 * 
 * 
 */