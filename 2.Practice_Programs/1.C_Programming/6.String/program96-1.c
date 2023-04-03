// APPLICATION NAME : Accept string and character and che weather it is present

// INPUT = Hello    o
/*



*/


// OUTPUT : present
/*  



*/


//////////////////////////////////////////////////////////
//
//  Application Name : Chrck presence of character 
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

bool CheckPresence (char *str,char ch)
{

    while (*str != '\0')
        {
            if (*str == ch)
                {
                    break;
                }
            str++;
        }
        if(*str == '\0')
            {
                return false;
            }
        else
            {
                return true;
            }
}

//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////
int main()
{
    char Arr[15];
    bool bRet = false;
    char cValue = '\0';

    printf("Enter String : ");
    scanf("%[^'\n]s",Arr);

    printf("Enter a character you want to check presence of :");
    scanf(" %c",&cValue);   // space before %c


    bRet = CheckPresence (Arr,cValue);
    if (bRet == true)
        {
            printf(" %c is present in the string:",cValue);
        }
    else
        {
            printf("Character is not present in given string");
        }
    return 0;
}
