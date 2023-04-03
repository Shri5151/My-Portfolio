import java.io.*;
import java.util.Scanner;

class Program148 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please enter the size of array : ");
        int Size = sobj.nextInt();
        Bussiness_logic obj = new Bussiness_logic(Size);
        obj.Accept();
        obj.Display();
        int iRet = obj.Addition();
        System.out.println("Addition is : "+iRet);
    }
}

class ArrayXBasic
{
    protected int Arr[];
    public ArrayX(int iSize)
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

class Bussiness_logic extends ArrayX
{
    public Bussiness_logic(int iSize)
        {
            super(iSize);
        }
    public int Addition()
        {
            int iSum = 0;
            for (int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
                {
                    iSum = iSum + Arr[iCnt];
                }
            return iSum;
        }
}