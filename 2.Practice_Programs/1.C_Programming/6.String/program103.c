// APPLICATION NAME :  count white spoaces in string
// CHARACTER TOGGLE
// INPUT = 
/*



*/


// OUTPUT :
/*  



*/


//////////////////////////////////////////////////////////
//
//  Application Name : count white spoaces in string 
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

int CountSpacese(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
        {
            if ((*str == ' '))
                {
                    iCnt++;
                }  


            str++;
        }

    return iCnt;
}


//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////
int main()
{
    char Arr[20];
    int iRet = 0 ;
    printf("Please enter string :\n ");
    scanf("%[^'\n']s",Arr);

    iRet = CountSpacese(Arr);

    printf("\number of whilte spaces is : %d \n",iRet);

    return 0;    
}

