import java.util.*;

class Program273
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string :");
        String str = sobj.nextLine();
        
        char Arr[] = str.toCharArray();
        for(int i = 0 ; i< Arr.length ; i++)
            {
                if((Arr[i]>='a')&&(Arr[i]<='z'))
                    {
                        Arr[i] = (char)(Arr[i] + 32);
                    }
            }
        String Output = new String(Arr);
        
        System.out.println(Output);
    }
}