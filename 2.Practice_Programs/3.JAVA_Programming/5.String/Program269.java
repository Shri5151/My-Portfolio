import java.util.*;

class Program269
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string :");
        String str = sobj.nextLine();
        
        char Arr[] = str.toCharArray();
        int Count = 0;;
        for(char Ch : Arr)    //for each loop
            {
                if((Ch>='a')&&(Ch<='z'))
                    {
                        Count++;
                    }
            }
        System.out.println("Small characters are : "+Count);
    }
}