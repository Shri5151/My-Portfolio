#include<stdio.h>

int Multiplication(int iValu1,int iValue2)
{
    int iAns=0;

    iAns=iValu1*iValue2;
    return iAns;

}

int main ()
{
    int iA=0;
    int iB=0; 
    int fRet=0;
    printf("Enter first number\n");
    scanf("%d",&iA);

    printf("Enter the seconf number\n");
    scanf("%d",&iB);

    

    fRet=Multiplication(iA,iB);
    printf("The multiplication is:%d\n",fRet);
    return 0;
}

int Mult(int iX,int iY)
{
    int iRet=0;

    iRet=iX*iY;
    return iRet;

}
