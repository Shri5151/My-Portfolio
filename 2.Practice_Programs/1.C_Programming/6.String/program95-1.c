// APPLICATION NAME : 

// INPUT = Shrinivas joshi
/*



*/


// OUTPUT : 1
/*  



*/


//////////////////////////////////////////////////////////
//
//  Application Name : 
//  Input :     
//  Output : 
//  Author : Shrinivas joshi   
//  Date : 16/11/2022    
//
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

int CountFrequency (char *str,char ch)
{
    int iCnt = 0;
    while (*str != '\0')
        {
            if (*str == ch)
                {
                    iCnt++;
                }
            str++;
        }
    return iCnt;
}

//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////
int main()
{
    char Arr[15];
    int iRet = 0;
    char cValue = '\0';

    printf("Enter String : ");
    scanf("%[^'\n]s",Arr);

    printf("Enter a character you want to check frequency of :");
    scanf(" %c",&cValue);   // space before %c


    iRet = CountFrequency (Arr,cValue);
    printf("Frequency of %c is : %d",cValue,iRet);
    
    return 0;
}
