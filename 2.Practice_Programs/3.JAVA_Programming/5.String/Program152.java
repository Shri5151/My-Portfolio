import java.util.Scanner;

class Program152
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter your full name : ");
        String str = sobj.nextLine();

        System.out.println("Welcome "+str);
    }

}