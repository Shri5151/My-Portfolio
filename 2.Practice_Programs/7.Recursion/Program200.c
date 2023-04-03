//  263  (Input)
// Count the number of Digits

#include<stdio.h>
#include<stdbool.h>



int CountDigitsR(int No)
{
    static int iCnt = 0;
    if(No != 0)
        {
            iCnt++;
            No = No / 10;
            CountDigitsR(No);
        }
    return iCnt;
}

int main()
{
    int Value = 0;
    int iRet = false;
    printf("Enter the number: \n");
    scanf("%d",&Value);

    iRet = CountDigitsR(Value);
    printf("Number of Digits in %d is : %d",Value,iRet);

    return 0 ;
}