/*
    Steps to develop the application
    Step 1: Understand the problem statement
    Step 2 : Write the algorithm
    Step 3: Decide the programming language (C/C++/Java/Python/______)
    Step 4 : Write the program
    Step 5 : Test the program 
*/

// Chech the Given number is divisible by 5

// Input

// Values : 10  20  30  40  50

// Output
// Addition is : 150

// Algoithm
/*
    START
        Accept the number from user as No
        Divide that No by 5 and check the value of remainder
        If the value is 0
            display as no is divisible by 5
        otherwise
            display as no is not divisible bye 5
    END
*/


//////////////////////////////////////////////////////////
//
//  Application Name : Program8
//  Input :     N numbers
//  Output :    Addition
//  Author :    Shrinivas Joshi
//  Date :      18 September 2022
//
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>


bool Check_Divisible_Five(int iValue)
{
    if (iValue%5==0)
    {
        return true;
    }
    else
    {
        return false;
    } 
}

int main ()
{
    int iNumber=0;
    bool bAns=false;

    printf("Enter the first number:\n");
    scanf("%d",&iNumber);
    bAns=Check_Divisible_Five(iNumber);

    if (bAns==true)
    {
        printf("The Number is Divisible by 5\n");
    }
    else
    {
        printf("The Number is not Divisible by 5\n");
    }
    return 0;
}
