import java.util.*;

class Program162
{
    public static void main(String args[]) 
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter string : ");
        String i = sobj.nextLine();

        

        pobj.Display_With_Char_Array(i);

        System.out.println("____________________________");
        pobj.Display_With_String(i);
    }
}

class Pattern
{
    public void Display_With_Char_Array(String str)
        {
            char Arr []= str.toCharArray();
            int i = 0, j = 0;
            
            for (i = 0 ; i < Arr.length ; i++)
                {
                    for (j = 0 ; j < Arr.length ; j++)
                        {
                            System.out.print(Arr[j]+"\t");
                        }
                    System.out.println();
                }
        }
    
        public void Display_With_String(String str)
            {
                int i = 0, j = 0;
                
                for (i = 0 ; i < str.length() ; i++)
                    {
                        for (j = 0 ; j < str.length() ; j++)
                            {
                                System.out.print(str.charAt(j)+"\t");
                            }
                        System.out.println();
                    }
            }
}
