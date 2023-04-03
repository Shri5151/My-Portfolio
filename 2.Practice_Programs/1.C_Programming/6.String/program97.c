// APPLICATION NAME : Accept character  and convert Small letters in Capital (call by addreass)

// INPUT = Hello    o
/*



*/


// OUTPUT :
/*  



*/


//////////////////////////////////////////////////////////
//
//  Application Name : convert small letter character into capital 
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

char ToUpperX(char ch)
{
    if((ch >= 'a')&&(ch <= 'z'))
    {
        return (ch-32);
    }
    else
    {
        return ch;
    }

}


//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////
int main()
{
    char cValue = '\0',cRet = '\0';

    printf("Enter the character \n");
    scanf("%c",&cValue);

    cRet = ToUpperX(cValue);
    printf("Character in the upper case is  : %c",cRet);


    return 0;
}

