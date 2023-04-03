// APPLICATION NAME : Accept character from user and check case of character 
// INPUT = A
/*



*/


// OUTPUT : is Capital case
/*  



*/


//////////////////////////////////////////////////////////
//
//  Application Name : Check case of character 
//  Input : 'A'    
//  Output : is Capital
//  Author : Shrinivas joshi   
//  Date : 16/11/2022    
//
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

bool IsCapitalX(char ch)
{
    if ((ch >='A')&&(ch<='Z'))
        {
            return true ;
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
    char cValue = '\0';
    bool bRet = false;


    printf("Enter a character :");
    scanf("%c",&cValue);

    bRet = IsCapitalX(cValue);

    if (bRet == true)
        {
            printf("%c is capital case letter ",cValue);
        }
    else
        {
            printf("%c is not capital case letter ",cValue);
        }
    return 0;
}
