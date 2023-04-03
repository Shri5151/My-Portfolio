//  10 (Input)
// 10+9+8+7+6+5+4+3+2+1+0   

#include<stdio.h>

int AdditionI(int No)
{
    int Sum = 0;
    int iCnt = 1;
    
    while(iCnt <= No)
    {
        Sum = Sum + iCnt;
        iCnt++;
    }
    return Sum;
}

int AdditionR(int No)
{
    static int Sum = 0;
    static int iCnt = 1;
    
    if(iCnt <= No)
    {
        Sum = Sum + iCnt;
        iCnt++;
        AdditionR(No);
    }
    return Sum;
}

int main()
{
    int Value = 0;
    int Ret = 0;
    printf("Enter the number: \n");
    scanf("%d",&Value);

    Ret = AdditionR(Value);
    printf("Addition is %d",Ret);

    return 0 ;
}