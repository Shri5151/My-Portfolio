// check if 4th bis is on or off
// and turn it off 
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

// 0000    0000    0000    0000    0000    0000    0000    1000    we have to turen this 4th bit off

// 1111    1111    1111    1111    1111    1111    1111    0111     this is mask
//    F       F       F       F       F       F       F       7
// FFFFFFF7
// 0XFFFFFFF7

// 2048
UINT OffBit(UINT No)
{
    UINT iMask = 0XFFFFFFF7;
    // UINT iAns = 0;

    // iAns = No & iMask;

    // return iAns;

    return (No & iMask);

}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    iRet = OffBit(Value);

    printf("updated number is : %d",iRet);
    
    return 0;
}