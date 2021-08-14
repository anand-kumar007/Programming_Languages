package _1_CORE;

public class AccessModifier {

    final int a=10;

    void dispaly()
    {
        // a=11;  as it is final
        System.out.println("non-static Private function");
    }
    public void check()
    {
        System.out.println("Hey! How are you!!");
    }
    public static void PrintMsg()
    {
        System.out.println("static function public");
        //no need to use object for calling it
    }

    public static void main(String args[])
    {
        AccessModifier obj = new AccessModifier();
        obj.dispaly();  //Okay bcz within the same class
        PrintMsg(); //it's a way of calling the static function
                    //simply do this no need to call with object

        System.out.println("Boom its done");
    }
}


/*

access_Modifiers

1. default scope ==> nothing is specified 
    within the package
2. private scope ==> private keyword
3. protected ==> package 
4. public ==> anywhere


non-access modifier

1.static  ==> directly can call these methods and 
              variables

2.final  ==> constt  ,,,,cannot be changed
             so initialized @ initialization time 

3. abstract ==> for creating abstract class and     methods

4. synchronized and volatile ==>
                        used for threads
    privatet synchronized fun(){ }
    we are saying that fun() can be accessed by one thread at a time 

    volatile and synchronized are mutually exclusive
    can be either of them at a time

    volatile means we are saying store it in ram
    rather than in cache 


*/