//  263  (Input)
// return addition of Digits

#include<stdio.h>
#include<stdbool.h>



int SumDigits(int No)
{
    static int iCnt = 0;
    static int iSum = 0;
    int iDigit = 0;
    if(No != 0)
        {
            iDigit = No % 10;
            iSum = iSum + iDigit;
            iCnt++;
            No = No / 10;
            SumDigits(No);
        }
    return iSum;
}

int main()
{
    int Value = 0;
    int iRet = false;
    printf("Enter the number: \n");
    scanf("%d",&Value);

    iRet = SumDigits(Value);
    printf("Addition of Digits in %d is : %d",Value,iRet);

    return 0 ;
}