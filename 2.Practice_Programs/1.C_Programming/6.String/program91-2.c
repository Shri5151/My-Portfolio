// APPLICATION NAME : Display length of String

// INPUT = Shrinivas joshi
/*



*/


// OUTPUT : 14
/*  



*/


//////////////////////////////////////////////////////////
//
//  Application Name : Display Length of string  
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

int strlenX(char *str)
{
    int iCnt = 0 ;
    int i = 0;
    while (str[i]!= '\0')
        {
            iCnt++;
            i++;
        }
    return iCnt;
}

//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////
int main()
{
    char Arr [20];
    int iRet = 0;

    printf("Enter string :");
    // scanf("%s",Arr);
    scanf("%[^'\n']s",Arr);

    
    iRet = strlenX(Arr);

    printf("Length of string is :%d",iRet);
    return 0;
}
