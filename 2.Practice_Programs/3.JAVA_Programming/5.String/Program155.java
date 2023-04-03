import java.util.Scanner;

class Program155
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter String : ");
        String str = sobj.nextLine();
        
        MarvellousX obj = new MarvellousX(str);
        int iRet = obj.CountSmallCase();
        System.out.println("number of small case character are : "+iRet);
        iRet = obj.CountCapitalCase();
        System.out.println("number of Capital case character are : "+iRet);
        iRet = obj.CountDigits();
        System.out.println("number of digits are : "+iRet);
       
    }

}

class MarvellousX
{
    public String str;
    public MarvellousX(String s)
        {
            str = s;
        }
    public void Display()
        {
            for (int iCnt = 0 ; iCnt < str.length() ; iCnt++)
                {
                    System.out.println(str.charAt(iCnt));
                }
        }
    public int CountSmallCase()
        {
            int iSmallCount = 0;
            for (int iCnt = 0 ; iCnt < str.length() ; iCnt++)
                {
                    if((str.charAt(iCnt) >= 'a')&&(str.charAt(iCnt)<='z'))
                        {
                            iSmallCount++;
                        }
                } 
            return iSmallCount;
        }

        public int CountCapitalCase()
        {
            int iCapitalCount = 0;
            for (int iCnt = 0 ; iCnt < str.length() ; iCnt++)
                {
                    if((str.charAt(iCnt) >= 'A')&&(str.charAt(iCnt)<='Z'))
                        {
                            iCapitalCount++;
                        }
                } 
            return iCapitalCount;
        }
        public int CountDigits()
        {
            int iDigitCount = 0;
            for (int iCnt = 0 ; iCnt < str.length() ; iCnt++)
                {
                    if((str.charAt(iCnt) >= '0')&&(str.charAt(iCnt)<='9'))
                        {
                            iDigitCount++;
                        }
                } 
            return iDigitCount;
        }
}