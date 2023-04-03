import java.io.*;
import java.util.Scanner;

class Program151
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please enter the size of array : ");
        int Size = sobj.nextInt();
        Bussiness_logic obj = new Bussiness_logic(Size);
        obj.Accept();
        obj.Display();
        boolean bRet = obj.ChkPalindrom();
        if (bRet == true)
            {
                System.out.println("The given array is palindrom");
            }
        else
            {
                System.out.println("The given array is not palindrom");
            }          
    }
}

class  ArrayXBasic
{
    protected int Arr[];
    public ArrayXBasic(int iSize)
        {
            Arr = new int [iSize];
        }
    protected void Accept()
        {
            Scanner sobj = new Scanner(System.in);
            System.out.println("Please enter "+Arr.length+" elements : ");

            for (int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
                {
                    System.out.print("Please enter element no "+(iCnt+1)+" : ");
                    Arr[iCnt] = sobj.nextInt();
                }
        }
    protected void Display()
        {
            Scanner sobj = new Scanner(System.in);
            System.out.println("Elemnts of arry are : ");
            for (int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
                {
                    System.out.print(Arr[iCnt]+"\t");
                }
            System.out.println();
        }
}

class Bussiness_logic extends ArrayXBasic
{
    public Bussiness_logic(int iSize)
        {
            super(iSize);
        }

    public boolean ChkPalindrom()
        {
            int iStart = 0;
            int iEnd = Arr.length-1;
            boolean bFlag = true;

            while(iStart < iEnd)
                {
                    if (Arr[iStart] != Arr[iEnd])
                        {
                            bFlag = false;
                            break;
                        }
                    iStart++;
                    iEnd--;
                }
            
            return bFlag;
        }


}
