// APPLICATION NAME : Accept numbers from user and perform addition of that numbers

// INPUT 
// 

// OUTPUT
// 


// INPUT 
// 

// OUTPUT
// 


//////////////////////////////////////////////////////////
//
//  Application Name : Addition of N numbers
//  Input :    
//  Output :  
//  Author : Shrinivas joshi   
//  Date : 02/11/2022    
//
//////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////





//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////


int main()
{
    int Arr[5];
    int iCnt = 0;

    printf("Enter the elements\n");
    for (iCnt = 0 ;iCnt < 5 ;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    printf("Elemts are:\n")
        for (iCnt = 0 ;iCnt < 5 ;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
    //static memory allocation
    //with loops 
    return 0;
}

