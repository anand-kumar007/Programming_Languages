package _1_CORE;
public class Variables {
    int num=10;  //instance varible
    static int abs=100;

    private synchronized void fun()
    {
        int a = 10;  //local variable
        System.out.println("local variable a :" + a);
    }

    public  void fun2()
    {
        double b=10.4;
        // System.out.println(a); //cannot access
        System.out.println("local varible b : "+b); 
    }

    public static void main(String args[])
    {
        Variables obj = new Variables();
        obj.fun();
        obj.fun2();


        // obj.num =4;
        System.out.println("\ninstance variable num for obj1 : " + obj.num);


        Variables obj2 = new Variables();
        obj2.num =130;
        System.out.println("instance variable num for obj2 : " + obj2.num);


        abs =10;
        Variables.abs = 20; //any of the two ways 
        //they are per class
        // obj1.abs=23;  //error

        System.out.println("\nStatic vaiable abs : "+ abs);
    }
}


/* 
    Mainly three types of varibles
    1.Local
    2.instance
    3.class/static

    Local ==> visiblity within that particular method only,
              access modifiers cannot be used with them
            
              garbage value initialization
              in form of stack implementaion in memory

instance ==> defined at the class level
             like dataMember in c++ but these can be initialize here in java directly
             specific to each instance (object)
             
             heap implementaion in memory,
             access modifiers can be used with them

static ==> these are per class not the per object,

           access modifiers can be used with them , 
           rarely used
           stored in static memory
           have the program scope
 
 */