import java.util.*;

class Program163
{
    public static void main(String args[]) 
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter number: ");
        int i = sobj.nextInt();

        pobj.Display(i);
        

    }
}

class Pattern
{
   public void Display(int iNo)
    {
        int iDigit = 0;

        while (iNo != 0)
            {
                iDigit = iNo % 10;
                System.out.println(iDigit+"\t");
                iNo = iNo / 10;
            }
        
    }
}
