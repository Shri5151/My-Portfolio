//  4(Input)
//  Factorial = 24  

#include<stdio.h>

int FactorialR(int No)
{
    static int Fact = 1;
    static int iCnt = 1;
    
    if(iCnt <= No)
    {
        Fact = Fact * iCnt;
        iCnt++;
        FactorialR(No);
    }
    return Fact;
}

int main()
{
    int Value = 0;
    int Ret = 0;
    printf("Enter the number: \n");
    scanf("%d",&Value);

    Ret = FactorialR(Value);
    printf("Factorial is %d",Ret);

    return 0 ;
}