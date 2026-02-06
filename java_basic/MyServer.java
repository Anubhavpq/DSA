package java_basic;
    import java.io.*;

import java.net.*;

public class MyServer {

   public static void main(String[] args) {

       try {

           ServerSocket ss = new ServerSocket(9999);

           Socket s = ss.accept();

           DataInputStream dis = new DataInputStream(s.getInputStream());

           String str = dis.readUTF();

           System.out.println("message= " + str);

           dis.close();

           s.close();

           ss.close();

       } catch (Exception e) {

           e.printStackTrace();

       }

   }

}


