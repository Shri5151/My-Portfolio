// APPLICATION NAME :  convert capital letter into small in string
// CHARACTER TOGGLE
// INPUT = Hello    o
/*



*/


// OUTPUT :
/*  



*/


//////////////////////////////////////////////////////////
//
//  Application Name : convert capital letter into small in string 
//  Input :     
//  Output : 
//  Author : Shrinivas joshi   
//  Date : 16/11/2022    
//
//////////////////////////////////////////////////////////

#include<stdio.h>


///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }                  
        str++;
    }
}


//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////
int main()
{
    char Arr[20];
    printf("Please enter string :\n ");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("String after conversion is : %s\n",Arr);

    return 0;    
}

