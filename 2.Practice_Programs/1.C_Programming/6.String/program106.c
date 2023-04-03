// APPLICATION NAME :  copy data from string into a empty string change case capital to small to before copying

// INPUT = 
/*



*/


// OUTPUT :
/*  



*/


///////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : copy data from string into a empty string change case capital to
//                     small to before copying
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

void strSmallX(char *src,char *dest)
{
    while (*src != '\0')
        {
            if((*src >= 'A')&&(*src <= 'Z'))
                {
                    *dest = *src + 32;
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

    strSmallX(Arr,Brr);

    printf("original string is :%s \n",Arr);
    printf("copied string is :%s \n",Brr);

    return 0;    
}

