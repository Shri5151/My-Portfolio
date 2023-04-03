import java.util.Scanner;

class Program156
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
    public char Arr[];
    public MarvellousX(String str)
        {
            Arr = str.toCharArray();;
        }
    public void Display()
        {
            for (int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
                {
                    System.out.println(Arr[iCnt]);
                }
        }
    public int CountSmallCase()
        {
            int iSmallCount = 0;
            for (int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
                {
                    if((Arr[iCnt] >= 'a')&&(Arr[iCnt]<='z'))
                        {
                            iSmallCount++;
                        }
                } 
            return iSmallCount;
        }

        public int CountCapitalCase()
        {
            int iCapitalCount = 0;
            for (int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
                {
                    if((Arr[iCnt] >= 'A')&&(Arr[iCnt]<='Z'))
                        {
                            iCapitalCount++;
                        }
                } 
            return iCapitalCount;
        }
        public int CountDigits()
        {
            int iDigitCount = 0;
            for (int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
                {
                    if((Arr[iCnt] >= '0')&&(Arr[iCnt]<='9'))
                        {
                            iDigitCount++;
                        }
                } 
            return iDigitCount;
        }
}