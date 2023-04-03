// APPLICATION NAME : Calculate occurance of 'a'

// INPUT = Shrinivas joshi
/*



*/


// OUTPUT : 1
/*  



*/


//////////////////////////////////////////////////////////
//
//  Application Name : calculate occurance of 'a' 
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

int CountCh (char *str)
{
    int iCnt = 0;
    while (*str != '\0')
        {
            if ((*str == 'a')||(*str == 'A'))
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

    iRet = CountCh (Arr);
    printf("Frequency of 'a' is : %d",iRet);
    
    return 0;
}
