package _4_OOP;


class Base {
    String name;

    Base() {
        this("");
        System.out.println("No-argument constructor of" + " base class");
    }

    Base(String name) {
        this.name = name;
        System.out.println("Calling parameterized constructor" + " of base");
    }
}

class Derived extends Base {
    Derived() {
        System.out.println("No-argument constructor " + "of derived");
    }

    Derived(String name) {
        // invokes base class constructor 2
        super(name);
        System.out.println("Calling parameterized " + "constructor of derived");
    }

    public static void main(String args[]) {
        // Derived obj = new Derived("test");

        // Calls No-argument constructor
        // Derived obj = new Derived();
    }
}
