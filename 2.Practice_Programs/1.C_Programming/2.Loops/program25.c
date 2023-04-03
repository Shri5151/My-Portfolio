//display table (padha) of given number


#include<stdio.h>
void DisplayTable(int iNo)
{
    register int iCnt = 0;
    int iMult = 0;

    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        iMult = iNo * iCnt;
        printf("%d\n",iMult);

    }

}


int main ()
{
    int iValue = 0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);

    printf("Table of given number is given below %d\n",iValue);
    DisplayTable(iValue);
    
    return 0;
}