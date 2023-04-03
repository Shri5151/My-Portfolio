import java.util.Scanner;

class Program153
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter your full name : ");
        String str = sobj.nextLine();

        System.out.println("Number of character are :"+str.length());
    }

}