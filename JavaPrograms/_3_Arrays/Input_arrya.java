package _3_Arrays;
import java.util.Scanner;

/*

int [] arr = new int[6];
int arr[]  = new int[6];

int [] arr = {1,2,3,4};
int arr[] = new int[] {1,2,,3,4};
int arr[] = {1,2,,3,4};

similarly we have 2-d arrays

int [][] arr = new int[3][2];

*/
public class Input_arrya {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        
        // declaration 1. using new 2. array intialized
        // 1. using new
        int[] a = new int[5]; // just use [] before name
        // int[] b = { 10, 20, 30, 40 }; // other things same as c
        int b[] = { 10, 20, 30, 40 }; // other things same as c

        System.out.println("enter 5 elemnts for array1 : ");

        for (int i = 0; i < 5; i++) {
            a[i] = sc.nextInt();
        }

        System.out.println("------------------------\n");

        for(int value : a)
        {
            System.out.print(value + " ");
        }
        System.out.print("\n");

        for(int value : b)
        {
            System.out.print(value + " ");
        }
        System.out.println("\n");

        System.out.println("array a's size : " + a.length);
        System.out.println("array b's size : " + b.length);

        sc.close();
    }
}

/*
 * Arrays
 * 
 * used to store multiple elements of same data type
 * 
 * specific elements are acceessible by it's index array's size is fixed and
 * cannot be changed
 * 
 */