package _4_OOP;

class Const_Chaining2 {

    Const_Chaining2() {
        System.out.println("default");
    }

    Const_Chaining2(int x) {

        this();
        System.out.println(x);
    }

    Const_Chaining2(int x, int y) {

        this(5);
        System.out.println(x * y);
    }

    public static void main(String args[]) {
        // invokes parameterized constructor 3
        new Const_Chaining2(8, 10);
    }
}
