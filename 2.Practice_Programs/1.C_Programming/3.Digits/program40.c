// APPLICATION NAME : Accept number from user and check weather the given number is palindrome or not using FOR LOOP
// INPUT 
// 751

// OUTPUT
// (not palindrom)157


// INPUT 
// 121

// OUTPUT
// palindrom number (121)


//////////////////////////////////////////////////////////
//
//  Application Name :Number of Digits 
//  Input :  751/121   
//  Output :  N/Y
//  Author : Shrinivas joshi   
//  Date : 02/11/2022    
//
//////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

bool Check_Palindrom(int iNo)
{
    int iChkPalindrom = iNo;
    int iDigit = 0, iRev = 0;
    
    if (iNo<0)
    {
        iNo = -iNo;
    }
    for (iDigit = 0,iRev = 0 ; iNo != 0 ; iNo = iNo/10)         
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10)+iDigit;
        
    }

    //thease below if else conditions can be removed by using below line at return statement 
    //return iRev == iChkPalindrom;

    if (iRev == iChkPalindrom)
    {
        return true;
    }
    else
    {
        return false;
    }
}



//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;
    bool bResult = false;
    

    printf("Applictation to determine wheather the given numberis a palindrom number or not\n");
    printf("Enter Your Number\n");
    scanf("%d",&iValue);

    bResult = Check_Palindrom(iValue);
    if(bResult == true)
    {
        printf("The given number is a Palindrom Nubmer\n");
    }
    else
    {
        printf("The given number is not a Palindrom number\n");
    }

    return 0;
}

