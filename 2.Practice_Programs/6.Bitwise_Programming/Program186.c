// check if 4th bis is on or off
// and toggle it  
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

// 0000    0000    0000    0000    0000    0000    0000    1000    we have to  toggle 4th bit

//    0       0       0       0       0       0       0       8
// 0000008
// 0X0000008

// 2048
UINT OffBit(UINT No)
{
    UINT iMask = 0X0000008;
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