// APPLICATION NAME : Accept number from user and return the smallest digit from that number
// INPUT 
// 751

// OUTPUT
// 1


// INPUT 
// 2069

// OUTPUT
// 0


//////////////////////////////////////////////////////////
//
//  Application Name :Number of Digits 
//  Input :  751/2069   
//  Output :  1/0
//  Author : Shrinivas joshi   
//  Date : 02/11/2022    
//
//////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

int Min_Digit(int iNo)
{
    int iDigit = 0;
    int iMin = 9 ;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo!=0)
    {
        iDigit = iNo % 10;
        if (iDigit < iMin)
        {
            iMin = iDigit;
            //To reduce time complexity in some cases
            if(iMin == 0)
            {
                break;
            }
        }


        iNo = iNo/10;
    }
    return iMin;
}



//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;
    int iResult = 0;
    

    printf("Applictation to determine smallest number in given number\n");
    printf("Enter Your Number\n");
    scanf("%d",&iValue);

    iResult = Min_Digit(iValue);
    printf("The smallest number is %d\n",iResult);
    
    return 0;
}

