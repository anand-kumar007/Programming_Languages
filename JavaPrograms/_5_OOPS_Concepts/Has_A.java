package _5_OOPS_Concepts;


/* 
Association is nothing but relationship btwn classes it has two types
1. aggregation (weak relationship)
    two objects will have loose coupling
    one object can live without another(both can exists independently)
    eg : Driver and car (are loosely coupled they can exists independently)
    Public class Driver
    {
        private Car c1;
        //i can access all properties of car using c1 in Driver class

    }
    eg : 
    public class Team
    {
        List<Player> p;

        //all players can exists without a team and vice versa
    }
2. compostion (strong relationship)
    one object cannot exists without another object
    objects engine cannot exists without car and vice versa
    

*/
 class Bike  
{  
    private String color;  
    private int maxSpeed;  
    public void bikeInfo()  
    {  
        System.out.println("Bike Color= "+color + " Max Speed= " + maxSpeed);  
    }  
    public void setColor(String color)  
    {  
        this.color = color;  
    }  
    public void setMaxSpeed(int maxSpeed)  
    {  
        this.maxSpeed = maxSpeed;  
    }  
}

// In the code above the Bike class has a few instance variables and methods.

 class Pulsar extends Bike {
    public void PulsarStartDemo() {
        Engine PulsarEngine = new Engine();
        PulsarEngine.stop();
    }
}

// Pulsar is a type of bike that extends the Bike class that shows that Pulsar
// is a Bike. Pulsar also uses an Engine's method, stop, using composition. So
// it shows that a Pulsar has an Engine. 

 class Engine {
    public void start() {
        System.out.println("Started:");
    }

    public void stop() {
        System.out.println("Stopped:");
    }
}

// The Engine class has the two methods start( ) and stop( ) that are used by
// the Pulsar class.

public class Has_A {
    public static void main(String[] args) {
        Pulsar myPulsar = new Pulsar();
        myPulsar.setColor("BLACK");
        myPulsar.setMaxSpeed(136);
        myPulsar.bikeInfo();
        myPulsar.PulsarStartDemo();
    }
}

// In the code above we make an object of the Pulsar class and then initialize it. 

// All the methods like

// setColor( ), bikeInfo( ), setMaxSpeed( ) are used here because of the Is-A relationship of the Pulsar class with the Bike class.


