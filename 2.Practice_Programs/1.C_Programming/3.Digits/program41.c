// APPLICATION NAME : Accept number from user and return the largest digit from that number
// INPUT 
// 751

// OUTPUT
// 7


// INPUT 
// 1069

// OUTPUT
// 9


//////////////////////////////////////////////////////////
//
//  Application Name :Number of Digits 
//  Input :  751/1069   
//  Output :  7/9
//  Author : Shrinivas joshi   
//  Date : 02/11/2022    
//
//////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

int Max_Digit(int iNo)
{
    int iDigit = 0;
    int iMax = 0 ;
    if (iNo <0)
    {
        iNo = -iNo;
    }
    while (iNo!=0)
    {
        iDigit = iNo % 10;
        if (iDigit > iMax)
        {
            iMax = iDigit;
            //To reduce time complexity in some cases
            if(iMax == 9)
            {
                break;
            }
        }


        iNo = iNo/10;
    }
    return iMax;
}



//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;
    int iResult = 0;
    

    printf("Applictation to determine largest number in given number\n");
    printf("Enter Your Number\n");
    scanf("%d",&iValue);

    iResult = Max_Digit(iValue);
    printf("The largest number is %d\n",iResult);
    
    return 0;
}

