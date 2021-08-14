package _7_FileHandling;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

public class FileStream {
    public static void main(String[] args) throws IOException{
        
        FileStream myobj = new FileStream();

        File f1 = new File("abc.txt");

        myobj.Wrtie_to_file(f1);
    }


    private void Wrtie_to_file(File obj) throws FileNotFoundException,IOException
    {
        FileOutputStream fos = new FileOutputStream(obj);
        
        //since it takes bytes as input 
        fos.write("Hey there! this is my first code !".getBytes());
        fos.close();

        System.out.println("data written to "+ obj.getName() + " file !");
    }

}


//1.
