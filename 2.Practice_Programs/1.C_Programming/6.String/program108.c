// APPLICATION NAME :  reverse the given string

// INPUT = 
/*



*/


// OUTPUT :
/*  



*/


///////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : reverse the given string
//  Input :     
//  Output : 
//  Author : Shrinivas joshi   
//  Date : 16/11/2022    
//
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////

void strrevX(char *str)
{

    char *start = str;
    char *end = str;
    char temp = '\0';
    


    while(*end != '\0')
        {
            end++;
        }
    end--;

    while(start < end)
        {
            temp = *start;
            *start = *end;
            *end = temp;

            start++;
            end--;
            
        }


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

    strrevX(Arr);

    printf("Reverse string is : %s\n",Arr);


    return 0;    
}

