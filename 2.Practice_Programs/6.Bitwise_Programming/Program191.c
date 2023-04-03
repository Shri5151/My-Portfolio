// accept number and positiopn and turn off the bit at that position


#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
// 0000    1111    0000    1111    0000    1111    0000    1111
// 0       F       0       F       0       F       0       F 



UINT OffBit(UINT No, UINT Pos)
{
    UINT iMask = 0X0000001;
    
    iMask = iMask << (Pos-1);

    iMask = ~iMask;

    return (No & iMask);
}


int main()
{
    UINT Value = 0;
    UINT iRet = 0;
    UINT Position = 0;
    printf("Enter number : \n");
    scanf("%d",&Value);

    printf("Enter Position : \n");
    scanf("%d",&Position);

    iRet = OffBit(Value,Position);

    printf("Updated number is : %d ",iRet);
    return 0;
}