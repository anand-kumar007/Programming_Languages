package _4_OOP;

class Employee {
        int id;
        float salary;
        static String company = "Walmart";

        Employee(int i, float s) {
                id = i;
                salary = s;
        }

       public static void Tell_Company() {
                System.out.println(company);
                // System.out.println(salary); //error cannot access non-staric data
        }

        void display() {
                System.out.println(id + " " + salary + " " + company);
        }
};

// public class name used be same as file name here
public class Static_Word {
        public static void main(String[] args) {
                Employee e1 = new Employee(100, 5000);
                Employee e2 = new Employee(101, 4000);
                Employee e3 = new Employee(102, 6000);

                e1.display();
                e2.display();
                e3.display();

                //calling static method
                // Tell_Company();
                Employee.Tell_Company();
        }
}

/*
go outside the _4_OOP and run
java _4_OOP/Static_Word
*/

/*
static
Memory Allocation: 

They are stored in the Permanent Generation space of heap as they are associated with the class in which they reside not to the objects of that class. But their local variables and the passed argument(s) to them are stored in the stack. Since they belong to the class, so they can be called to without creating the object of the class.

Important Points:  

Static method(s) are associated with the class in which they reside i.e. they are called without creating an instance of the class
i.e ClassName.methodName(args).

They are designed with the aim to be shared among all objects created from the same class.

Static methods can not be overridden, since they are resolved using static binding by the compiler at compile time. 

However, we can have the same name methods declared static in both superclass and subclass, but it will be called Method Hiding as the derived class method will hide the base class method.

*/



/*
 * static keyword is used for memory management used to refer common properties
 * of an object memory is allocated once for static items
 * 
 */

/*
 * After you compile the code using the command:
 * 
 * javac fileName.java Run the java .class file by only specifying fileName
 * without the .java extension
 * 
 * java fileName if you use fileName.java it won't run the specific .class file;
 * it will try to interpret the .java file. if you want to interpret a .java
 * file then parent class must contain the main(String[]) method.
 */