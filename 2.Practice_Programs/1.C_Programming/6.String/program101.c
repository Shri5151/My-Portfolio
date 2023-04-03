// APPLICATION NAME :  convert Samll letter into Capital in string
// CHARACTER TOGGLE
// INPUT = 
/*



*/


// OUTPUT :
/*  



*/


//////////////////////////////////////////////////////////
//
//  Application Name : convert Samll letter into Capital in string 
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

void struprX(char *str)
{
    while(*str != '\0')
        {
            if ((*str >= 'a') && (*str <= 'z'))
                {
                    * str = *str - 32;
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

    struprX(Arr);

    printf("String after conversion is : %s \n",Arr);

    return 0;    
}

