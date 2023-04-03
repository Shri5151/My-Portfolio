import java.io.*;
import java.util.Scanner;

class Program149 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner (System.in);
        System.out.print("Enter size of array : ");
        int iSize = sobj.nextInt();


        int Arr[] = new int [iSize];

        int iSum = 0;
        for (int iCnt = 0; iCnt < Arr.length ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        for (int iCnt = 0; iCnt < Arr.length ; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }

        System.out.println("Addition is : "+iSum);
    }
}

