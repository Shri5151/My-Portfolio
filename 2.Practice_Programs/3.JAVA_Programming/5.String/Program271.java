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
        while(i< Arr.length)
            {
                if((Arr[i]>='a')&&(Arr[i]<='z'))
                    {
                        Count++;
                    }
            }
        System.out.println("Small characters are : "+Count);
    }
}