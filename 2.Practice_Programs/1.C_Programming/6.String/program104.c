// APPLICATION NAME :  copy data from string into a empty string

// INPUT = 
/*



*/


// OUTPUT :
/*  



*/


/////////////////////////////////////////////////////////////////
//
//  Application Name : copy data from string into a empty string
//  Input :     
//  Output : 
//  Author : Shrinivas joshi   
//  Date : 16/11/2022    
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>


///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

void strcpyX(char *src,char *dest)
{
    while (*src != '\0')
        {
            *dest = *src;

            src++;
            dest++; 
        }
    *dest = *src;

}


//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////
int main()
{
    char Arr[20];
    char Brr[20];
    
    printf("Please enter string :\n ");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr,Brr);

    printf("Copied string is :%s ",Brr);

    return 0;    
}

