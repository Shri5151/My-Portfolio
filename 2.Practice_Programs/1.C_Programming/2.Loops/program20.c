//Addition of factors of given number

#include<stdio.h>


//time complexity O(N/2)
int SumFactors(int iNum)
{
    register int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNum/2); iCnt++)
    {
        if (iNum % iCnt == 0)
        {
            iSum = iSum +iCnt;
        }
    }
    return iSum; 
}

int main ()
{
    int iValue = 0;
    int iResult = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iResult = SumFactors(iValue);
    printf("Addition of factors of given number is :%d",iResult);

    return 0;
}