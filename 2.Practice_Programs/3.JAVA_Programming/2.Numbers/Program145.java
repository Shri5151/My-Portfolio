import java.util.*;
class Program145
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter number : ");
        int iNo1 = sobj.nextInt();        
        
        Numbers nobj = new Numbers();

        int iAns = nobj.FactorsMultiplication(iNo1);

        System.out.println("Multiplication of factors of "+ iNo1+" is "+iAns);
    }
}


class Numbers
{
    public int FactorsMultiplication(int iNo)
        {
            int iCnt = 0; 
            int iMult = 1; 
            
            for (iCnt = 1 ; iCnt < (iNo/2)+1 ; iCnt++)
                {
                    if (iNo % iCnt == 0)
                        {
                            iMult = iMult * iCnt;
                        }
                }

            return iMult;   
        }
}