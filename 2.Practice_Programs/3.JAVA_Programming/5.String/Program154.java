import java.util.Scanner;

class Program154
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter your full name : ");
        String str = sobj.nextLine();

        for (int iCnt = 0 ; iCnt < str.length() ; iCnt++)
            {
                System.out.println(str.charAt(iCnt));
            }
    }

}