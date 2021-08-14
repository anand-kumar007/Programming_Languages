import java.util.Scanner;
// import java.util.*;
import _0_anand_package.*;

public class p1 {

    public static void main(String agrs[]) {
        Factorial fact = new Factorial();
        Scanner sc = new Scanner(System.in);

        System.out.print("enter a numeber : ");
        int key = sc.nextInt();
        long ans = fact.factorial(key);

        System.out.print(key + "! = " + ans);

        sc.close();
    }
}
