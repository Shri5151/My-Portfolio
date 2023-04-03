#include <stdio.h>
typedef unsigned int UINT;
int CountOnBits(UINT No)
{
    int iCnt = 0;
    int Digit = 0;
    
    while(No != 0)
    {
        Digit = No % 2;
        // if (Digit == 1)
        // {
        //     iCnt++;
        // }
        // or use below logic

        iCnt = iCnt + Digit
        
        No = No / 2;
    }

    return iCnt;

}


int main()
{

    UINT value = 11;
    int Ret = 0;

    printf("Enter the number : \n");
    scanf("%d",&value);

    Ret = CountOnBits(value);

    printf("Number of bits which are ON are : %d\n",Ret);
    return 0;
}