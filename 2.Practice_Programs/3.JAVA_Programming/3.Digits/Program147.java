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
   
    public boolean is_ArmStrong_Number()
        {
            int iRet = 0;
            int iSum = 0;
            int iDigit = 0;
            int iPower = 1;

            int iValue = iNo;
            int iDigitCount = 0;
            
            while (iValue != 0)
                {
                    iDigitCount++;
                    iValue = iValue / 10;
                }

            iValue = iNo;

            int iAns = 1;

            iValue = iNo;
            while (iValue != 0)
                {
                    iDigit = iValue % 10;
                    
                    for (int iCnt = 1 ; iCnt <= iDigitCount ; iCnt++)
                        {
                            iPower = iPower * iDigit;
                        }
                    iPower = 1;

                    iSum = iSum + iPower;
                    
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