package _1_CORE;

public class access_test {
    
    public static void main(String args[])
    {
        AccessModifier obj = new AccessModifier();
        // obj.display(); //if private then will not run
        obj.check();  //cz it was public
        
        obj.dispaly(); //since now it's default so access is within package
    }
}
