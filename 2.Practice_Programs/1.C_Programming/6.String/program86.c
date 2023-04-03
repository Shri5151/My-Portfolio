// APPLICATION NAME : Accept character from user and check case of character 
// INPUT = a 
/*



*/


// OUTPUT : is small case
/*  



*/


//////////////////////////////////////////////////////////
//
//  Application Name : Check case of character 
//  Input : 'a'    
//  Output : is small
//  Author : Shrinivas joshi   
//  Date : 16/11/2022    
//
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

bool CheckSmall(char ch)
{
    if ((ch >='a')&&(ch<='z'))
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

    bRet = CheckSmall(cValue);

    if (bRet == true)
        {
            printf("%c is Small case letter ",cValue);
        }
    else
        {
            printf("%c is not Small case letter ",cValue);
        }
    return 0;
}
