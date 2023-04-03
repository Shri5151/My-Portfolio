import java.util.*;

class Program274
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string :");
        String str = sobj.nextLine();
        
        String data = str.replaceAll("\\s+", " ");
        String newstr = data.trim();

        String Arr[] = newstr.split(" ");

        System.out.println("Number of words are : "+Arr.length);
    }
}