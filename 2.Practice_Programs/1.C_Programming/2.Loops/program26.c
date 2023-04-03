//for loop in reverse order

#include<stdio.h>

void DisplayReverse(int iNo)
{
    register int  iCnt = 0;
    printf("____________________________________\n\n");
    
    for (iCnt = iNo; iCnt > 0; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n____________________________________\n");
}
int main ()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);
    DisplayReverse(iValue);

}