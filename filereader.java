// import java.io.*;  
// class filereader
// {  
//  public static void main(String args[])
//  {  
//   try
//  {  
//    FileWriter fw=new FileWriter("f1.txt");  
//    fw.write("Educating for better tomorrow");  
//    fw.close();  
//   }
//   catch(Exception e){System.out.println(e);}  
//   System.out.println("success");  
//  }  
// }  

import java.io.*;

public class filereader 
{
    public static void main(String arg[]) 
    {
        try {
            FileWriter fw = new FileWriter("f1.txt");
            fw.write("Education for better tomorrow");
            fw.close();
        } catch (Exception e) {
            System.out.println(e);
            System.out.println("Success");
        }
    }

}