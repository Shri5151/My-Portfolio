//  Shrinivas (Input)
// return length of string

#include<stdio.h>
#include<stdbool.h>

int StrlenR(char * Str)
{
    static int iCnt = 0;
    if(*Str != '\0' )
        {
            iCnt++;
            Str++;
            StrlenR(Str)                 ; 
        } 
    return iCnt;
}


int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string: \n");
    scanf("%[^'\n']s",Arr);


    iRet = StrlenR(Arr);
    printf("Length of String is : %d",iRet);

    return 0 ;
}