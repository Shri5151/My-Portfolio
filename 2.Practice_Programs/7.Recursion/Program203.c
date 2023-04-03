//  Shrinivas (Input)
// Count Cpital charaqcter

#include<stdio.h>
#include<stdbool.h>

int CountCapitalR(char * Str)
{
    static int iCnt = 0;
    if(*Str != '\0' )
        {
            if((*Str >= 'A')&&(*Str <= 'Z'))
                {                    
                    iCnt++;
                }
            Str++;
            CountCapitalR(Str);   
} 
    return iCnt;
}

int CountSmallR(char * Str)
{
    static int iCnt = 0;
    if(*Str != '\0' )
        {
            if((*Str >= 'a')&&(*Str <= 'z'))
                {                    
                    iCnt++;
                }
            Str++;
            CountSmallR(Str);
            (Str);   
} 
    return iCnt;
}


int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string: \n");
    scanf("%[^'\n']s",Arr);


    iRet = CountCapitalR(Arr);
    printf("Number of Capital letters in String is : %d\n",iRet);

    iRet = CountSmallR(Arr);
    printf("Number of Small  letter in String is : %d\n",iRet);


    return 0 ;
}