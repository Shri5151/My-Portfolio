//for loop in reverse order

#include<stdio.h>

void DisplayReverse(int iNo)
{
    register int  iCnt = 0;
    printf("____________________________________\n\n");
    iCnt = iNo; 
    while (iCnt > 0)
    {
        printf("%d\t",iCnt);
        iCnt--;
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