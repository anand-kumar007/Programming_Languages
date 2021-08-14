package _5_OOPS_Concepts;


// super with immediate parent class' instances
// super with immediate parent class' methods
// super with immediate parent class' constructor

class Vehicle {
    int maxSpeed = 120;

    Vehicle()
    {
        System.out.println("vehicle class constructor");
    }

    void message()
    {
        System.out.println("Hi from vehicle class");
    }
}

/* sub class Car extending vehicle */
class Car extends Vehicle {
    int maxSpeed = 180;

    Car()
    {
        super();  //calls the immediate parent class's constructor

        System.out.println("car class constructor");
    }

    void display() {
        /* print maxSpeed of base class (vehicle) */
        System.out.println("Maximum Speed: " + super.maxSpeed);
    }



   

    void message() {
        super.message();
        System.out.println("Hi from Car class");
    }
}

// Maximum Speed: 120
// -----------------------

// Hi from vehicle class
// Hi from Car class   
// ------------------------

// vehicle class constructor
// car class constructor
// Maximum Speed: 120   
// Hi from vehicle class
// Hi from Car class    


public class super_keyword {
    public static void main(String[] args) {
        Car small = new Car();
        small.display();

        small.message();
    }
}

/* 
super keyword in java is a reference variable that
is used to refer parent class objects.

1. used to refer immediate parent class instance variable

2. used to invoke parent class method 

3. used to invoke parent class constructor



*/