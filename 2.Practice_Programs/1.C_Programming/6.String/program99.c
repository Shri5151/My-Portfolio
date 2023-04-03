// APPLICATION NAME : Accept character and convert capital into small and small into capital (call by addreass)
// CHARACTER TOGGLE
// INPUT = Hello    o
/*



*/


// OUTPUT :
/*  



*/


//////////////////////////////////////////////////////////
//
//  Application Name : convert capital letter into small and vise versa
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

char CharToggle(char ch)
{
    if((ch >= 'A')&&(ch <= 'Z'))
        {
            return (ch+32);
        }
    else if((ch >= 'a')&&(ch <= 'z'))
        {
            return ch-32;
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

    cRet = CharToggle(cValue);
    printf("Toggled character is  : %c",cRet);


    return 0;
}

