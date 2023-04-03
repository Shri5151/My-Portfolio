// APPLICATION NAME : Accept character and convert capital letters in small (call by addreass)

// INPUT = Hello    o
/*



*/


// OUTPUT :
/*  



*/


//////////////////////////////////////////////////////////
//
//  Application Name : convert capital letter character into small
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

char ToLowerX(char ch)
{
    if((ch >= 'A')&&(ch <= 'Z'))
    {
        return (ch+32);
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

    cRet = ToLowerX(cValue);
    printf("Character in the lower case is  : %c",cRet);


    return 0;
}

