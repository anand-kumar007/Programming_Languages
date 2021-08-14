package _6_access_package;
import _5_OOPS_Concepts.Manager;


class Just_checking extends Manager
{
    int var=10;

    void show()
    {
        salary = 19000; //accessible since inheriting(as salary is private)
        System.out.println("manager's salary : " + salary);
    }

}


public class using_another_package {
    
    public static void main(String[] args) {
        Manager m1 = new Manager();

        // m1.display_default(); 
        //error since it's having default access specifier(so it's is avaible in that
        // package only)

        // System.out.println("manager's salary : " + m1.salary);
        // cannot access m1.salary directly since using_another_package class doesn't
        // inherit it from Manager class unlike just_checking class


        m1.msg();
        //since it's public so available throughout just need to import it from its
        //package

        Just_checking j1 = new Just_checking();

        j1.show();

    }
}

// systrace (for autocompleting the items )
