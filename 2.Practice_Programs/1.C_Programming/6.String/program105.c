// APPLICATION NAME :  copy data from string into a empty string change case small to capital to before copying

// INPUT = 
/*



*/


// OUTPUT :
/*  



*/


///////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : copy data from string into a empty string change case small to
//                     capital to before copying
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

void strCapitalX(char *src,char *dest)
{
    while (*src != '\0')
        {
            if((*src >= 'a')&&(*src <= 'z'))
                {
                    *dest = *src - 32;
                }
            else
                {
                    *dest = *src;
                }
            src++;
            dest++; 
        }
    *dest = '\0';

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

    strCapitalX(Arr,Brr);

    printf("original string is :%s\n",Arr);
    printf("copied string is :%s\n",Brr);

    return 0;    
}

