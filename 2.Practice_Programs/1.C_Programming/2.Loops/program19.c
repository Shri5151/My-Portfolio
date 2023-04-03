//display factors of given number 

#include<stdio.h>


//time complexity O(N/2)
void DisplayFactors(int iNum)
{
    register int iCnt = 0;
    printf("Factors are:");
    for(iCnt = 1; iCnt <= (iNum/2); iCnt++)
    {
        if (iNum % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
    } 
}

int main ()
{
    int iValue = 0;

    printf("Enter the Numbers\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);
    return 0;
}