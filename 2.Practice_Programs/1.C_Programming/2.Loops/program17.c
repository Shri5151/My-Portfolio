//Summation of given elements

#include<stdio.h>

int Summation()
{
    int iSize = 0;
    int iNo1 = 0;
    int iSum = 0;

    register int iCnt = 0;
    printf("Enter number of Elements:\n");
    scanf("%d",&iSize);

    printf("Enter Elements:\n");

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&iNo1);    
        iSum = iSum + iNo1;
    }
    return iSum;
}
int main()
{
   int iRet = 0;

    iRet = Summation();
    printf("Summation is : %d",iRet);

    return 0;
}