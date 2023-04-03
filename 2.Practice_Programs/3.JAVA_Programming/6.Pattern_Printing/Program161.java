import java.util.*;

class Program161
{
    public static void main(String args[]) 
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter number of rows : ");
        int i = sobj.nextInt();

        System.out.println("Enter number of column : ");
        int j = sobj.nextInt();

        pobj.Display(i,j);
        
    }
}

class Pattern
{
    public void Display(int iRow , int iCol)
        {
            int i = 0, j = 0,count = 0;
            for ( i= 1 ; i <= iRow ; i++)
                {
                    for ( j = 1 ; j <= iCol; j++)
                        {
                            
                            // if(count == 10)
                            //     {
                            //         count = 1;                            
                            //     }
                            // System.out.print(count+"\t");
                            // count++;

                            System.out.print(((count%9)+1)+"\t");
                            count++;
                        }
                    System.out.println();
                } 
        }
}
