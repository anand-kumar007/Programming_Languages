package _7_FileHandling;
// package command should be the first line of code

import java.io.File;
import java.io.FileNotFoundException;
// import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class createFile {



    public static void main(String[] args) {

    

        createFile obj1 = new createFile();
        obj1.create_file();
        
        // obj1.write_to_file();
        // obj1.read_from_file();
        obj1.check_deletion();
    }


    protected void create_file()
    {
        
        // File myObj = new File("D:\\files\\abc3.txt");
        File myObj = new File("abc.txt");
        try {
            if (myObj.createNewFile()) {
                String location = myObj.getAbsolutePath();
                
                String path = myObj.getPath();
                System.out.print("Original path : " + path);

                System.out.println("\nFile created: " + myObj.getName() + " at \n" + location);


            } else {
                System.out.println("File already exists.");
            }
        } catch (IOException e) {
            System.out.println("An error occurred.");
            e.printStackTrace();
        }

    }

    protected void write_to_file() {

        try {
            FileWriter fw = new FileWriter("abc.txt");
            for (int i = 0; i < 5; i++)
                fw.write("line " + i + "\n");

            System.out.println("wrote to file " );

            fw.close();
        }

        catch (IOException e) {
            System.out.println("error occured while writing to file");

            e.printStackTrace();
        }

    }

    protected void read_from_file()
    {
        try {
            // File fr = new File("abc.txt");
            File fr = new File("wiki.txt");

            Scanner sc = new Scanner(fr);
            System.out.println("---reading starts------");
            while(sc.hasNextLine())
            {
                String s1 = sc.nextLine();
                System.out.print(s1+"\n");
            }
            sc.close();

            System.out.println("file reading done!!");

        }
        catch(FileNotFoundException e)
        {
            System.out.print("file doesn't exists!! so cannot read it");
            e.getStackTrace();
        }
    }


    protected void check_deletion()
    {
        File f1 = new File("abc.txt");

        if(f1.delete())
        {
            System.out.println("file "+ f1.getName() + " has been deleted !");
        }
        else 
        {
            System.out.println("file "+ f1.getName() + " doesn't exists !");
        }
    }

}
