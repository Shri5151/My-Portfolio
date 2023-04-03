//chech weather given number is perfect or not

#include<stdio.h>
#include<stdbool.h>
//time complexity O(N/2)

bool CheckPerfect(int iNo)
{
    register int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSum = iSum +iCnt;
        }
    }
     if (iSum == iNo)
    {
        return true;
    } 
    else
    {
        return false;
    }
}

int main ()
{
    int iValue = 0;
    bool iResult = false;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iResult = CheckPerfect(iValue);
    if(iResult==true)
    {
        printf("%d is a Perfect number",iValue);
    }
    else
    {
        printf("%d is not a perfect number",iValue);
    }
    

    return 0;
}