import java.util.*;
class Program142
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter number : ");
        int iNo1 = sobj.nextInt();

        Numbers nobj = new Numbers();

        nobj.EvenFactorsDisplay(iNo1);


    }
}


class Numbers
{
    public void EvenFactorsDisplay(int iNo)
        {
            int iCnt = 0; 
            for (iCnt = 1; iCnt < (iNo/2) ; iCnt++) 
                {
                    if (iNo % iCnt == 0)

                        {
                            System.out.println("Even factor is :"+iCnt);
                        }
                }
        }
}