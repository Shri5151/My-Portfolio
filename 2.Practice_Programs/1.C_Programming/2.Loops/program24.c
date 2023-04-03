//display sum of non facctors


#include<stdio.h>
int SumNonFactors(int iNo)
{
    register int iCnt = 0;
    int iSum = 0;
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;       
        }
    }
    return iSum;

}


int main ()
{
    int iValue = 0;
    int iAns = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    iAns=SumNonFactors(iValue);
    printf("Summation of non factors are %d\n",iAns);
    return 0;
}