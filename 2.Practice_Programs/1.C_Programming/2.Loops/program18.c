//Application to demosntrate factorial

#include<stdio.h>

int Factorial()
{
    int iNum = 0;
    int iFact = 1;

    register int iCnt = 1;
    printf("Enter the Number:\n");
    scanf("%d",&iNum);

    

    for (iCnt = 1; iCnt <= iNum; iCnt++)
    {    
        iFact = iFact * iCnt;
    }
    return iFact;
}
int main()
{
   int iRet = 0;

    iRet = Factorial();
    printf("Factorial is : %d",iRet);

    return 0;
}