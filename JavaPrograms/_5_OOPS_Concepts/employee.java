package _5_OOPS_Concepts;

public class employee extends Manager{
    int emp_id;
    int emp_salary;
    
    employee(int id, int sal)
    {
        emp_id = id;
        emp_salary = sal;
    }

    void display()
    {
        //see we can access salay of manager here through inheritance

        System.out.println("empid : "+ emp_id + "\nemp_salary : "+ emp_salary +"\nManager's salary : "+ salary );
    }
    public static void main(String[] args) {
        
        employee e1 = new employee(101, 10000);
        e1.display();

        Manager m = new Manager();
        m.salary = 50000;
        System.out.print("manger m has salary now : "+ m.salary);
    }
    
}


/*

Inhertance is use for
1. code reusalbiliy
2. method overriding(run time polymorphism)

powerful feature of OOP through which one object acquires
some or all properties and behaviour of parent object

Vechicle (parent)
1. car
    1.1 meredes
    1.2 safari
2. bus
3. bikes
    3.1 bicycle
    3.2 motorBike
4. truks

Basically this defines an Is-A relation

car Is-A vehicle
bus Is-A vehicle
truck Is-A vehicle

etc



*/