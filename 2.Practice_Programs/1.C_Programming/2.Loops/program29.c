//display even factors
//time complexity O(N/4)
#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
    register int iCnt = 0;
    
    for(iCnt = 2;iCnt<=(iNo/2); iCnt = iCnt+2)      //also iCnt+=2
    {
        if (iNo % iCnt ==0) 
        {
            printf("%d\n",iCnt);
        }
        
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    DisplayEvenFactors(iValue);
    return 0;
}