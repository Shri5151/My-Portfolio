import java.util.*;
class Program146
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter number : ");
        int iNo = sobj.nextInt();        
        
        Digits dobj = new Digits(iNo);

        boolean bAns = dobj.is_ArmStrong_Number();
        if (bAns == true)
            {
                System.out.println(iNo+" is Armstrong number");
            }
        else
            {
                System.out.println(iNo+" is not Armstrong number");
            }
    }
}


class Digits
{
    public int iNo;
    public Digits(int a)
        {
            this.iNo = a;
        }
    private int Find_Number_Of_Digits()
        {
            int iValue = iNo;
            int iCnt = 0;
            
            while (iValue != 0)
                {
                    iCnt++;
                    iValue = iValue / 10;
                }
            return iCnt;
        }
    private int power(int Base , int Order)
        {
            int iValue = iNo;
            int iAns = 1;
            for (int iCnt = 1 ; iCnt <= Order ; iCnt++)
                {
                    iAns = iAns * Base;
                }
            return iAns;
        }
    public boolean is_ArmStrong_Number()
        {
            int iValue = iNo;
            int DigitCount = Find_Number_Of_Digits();
            int iRet = 0;
            int iSum = 0;
            int iDigit = 0;

              while (iValue != 0)
                {
                    iDigit = iValue % 10;
                    
                    iRet = power(iDigit,DigitCount);
                    iSum = iSum + iRet;
                    
                    iValue = iValue / 10;
                }
            if (iSum == iNo)
                {
                    return true;
                }
            else
                {
                    return false;
                }

        }
}