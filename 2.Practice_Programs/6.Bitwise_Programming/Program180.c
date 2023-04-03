// accept number and check if 4 th bit is on or off
// 1010  the counting starts from right side 


#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No)
{
    UINT iMask = 8;

    UINT Result = 0;

    Result = No & iMask;

    if (Result == iMask)
        {
            return true;
        }
    else
        {
            return false;
        }
}



int main()
{
    UINT  Value = 0;
    bool bRet = false;

    printf("Entyer number : \n");
    scanf("%d",&Value);

    bRet = CheckBit(Value);

    if(bRet == true)
        {
            printf("4th bit is on \n");
        }
    else
        {
            printf("4th bit is off\n");
        }
}
