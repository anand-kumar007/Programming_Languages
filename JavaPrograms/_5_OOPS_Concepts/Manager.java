package _5_OOPS_Concepts;

public class Manager {
    protected int salary=30000;

    // default so visibile until same package only
    // even if we import it it's not possible to access this method
    void display_default()
    {
        System.out.println("hey i am in displaying manager class !!");
    }

    public void msg()
    {
        System.out.println("hello this is a msg from manager class");
    }
}


/* 
differnet types of inheritance in java
1. single (single base and single chidl)
2. hierarchical (two or more child and single base)
3. multiple (two or more base and single child)
4. multilevel (A to B , B to C)
*/