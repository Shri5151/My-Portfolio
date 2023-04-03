// APPLICATION NAME : Calculate occurance of Capital character

// INPUT = Shrinivas joshi
/*



*/


// OUTPUT : 1
/*  



*/


//////////////////////////////////////////////////////////
//
//  Application Name : calculate occurance of Capital character
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

int CountCapital (char *str)
{
    int iCnt = 0;
    while (*str != '\0')
        {
            if ((*str >= 'A')&&(*str <= 'Z'))
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

    printf("Enter String : ");
    scanf("%[^'\n]s",Arr);

    iRet = CountCapital (Arr);
    printf("Frequency of Capital letters is : %d",iRet);
    
    return 0;
}
