package _0_anand_package;

public class Factorial {

    public long factorial(int num)
    {
        long temp=1;
        for(int i=1; i<=num; i++)
        {
            temp = temp*i;
        }

        return temp;
    }
  
}


/*
 * Creating user defined package
 * 
 * 1. first structure of package must be defined Let's go for the following
 * structure :
 * 
 * (i) first decide the name of the package and then create a sub-directory (ii)
 * Now,here you have to create a program in that directory with saying package
 * as your package name
 */