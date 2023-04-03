// toggle 5,6,7 bit
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

// 0000    0000    0000    0000    0000    0000    0111    0000    we have to  toggle 4th bit

//    0       0       0       0       0       0       7       0
// 0000070
// 0X0000070

// 2048
UINT OffBit(UINT No)
{
    UINT iMask = 0X0000070;
    // UINT iAns = 0;

    // iAns = No & iMask;

    // return iAns;

    return (No ^ iMask);

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