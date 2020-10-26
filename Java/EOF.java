import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.EOFException;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Scanner;

public class EOF{
public static void main(String args[])throws Exception{

    //Reading data from user

    Scanner sc=new Scanner(System.in);
    System.out.println("Enter a string");
    String data=sc.nextLine();
    byte buf[]=data.getBytes();


    
    //Writing it to a file using datastreamoutput
    DataOutputStream dos=new DataOutputStream(new FileOutputStream(file));
    for(byte b:buff){
        dos.writeChar(b);
    }
    dos.flush();


    //REading from the above created file using readchar() method
    DataInputStream dis=new DataInputStream(new FileInputStream(file));
    while(true){
        char ch;
        try{
            ch=dis.readChar();
            System.out.println(ch);
        }
        catch(EOFException e){
            System.out.println("EOF reached");

        }
        catch(IOException e){

        }
    }

}

}