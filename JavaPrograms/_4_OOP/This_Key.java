package _4_OOP;

//whichever class is public and has main() function that should be name of the file
 class This {
    int data;
    String str;

    This(int data, String str)
    {
        this(str);
        //constructor call must be first statment
        this.data = data;


        //here we need to tell explicitly
    }

    This(String str)
    {
        this.str = str;
    }


    public void add(int val)
    {
        this.data += val;

        //here this is optional 
    }
    
    public void display()
    {
        System.out.print("data : "+ this.data + "\nstring : "+ this.str);

        //here also  this is optional
    }



}

public class This_Key
{
    public static void main(String[] args)
    {
        This obj = new This(10,"Radha");
        obj.add(20);
        obj.display();
    }
}


/*
This keyword is mainly used to refer current class instance variable and it can also be used to return 
the current class instance from the method

uses :
1. can be passed as an argument in the constructor call

2. can be passed as an argument in method call

3. can be used to invoke current class method

4. this() can be used to invoke current class constructor

it is implicitly put by compiler

but we need to specify in case when parameter name is same as instanceVariable
*/