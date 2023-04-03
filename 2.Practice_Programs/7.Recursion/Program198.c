//  26  (Input)
// Summation of Factors 

#include<stdio.h>

void DisplayFactorsI(int No)
{
    int iCnt = 1;
    
    for (iCnt = 1 ; iCnt <= (No/2) ; iCnt++)
        {
            if (No % iCnt == 0)
                {
                    printf("%d\n",iCnt);
                }            
        }

}

int SumFactorsR(int No)
{
    static int iCnt = 1;
    static int iSum = 0;
    if (iCnt <= (No/2))
        {    
            if (No % iCnt == 0)
                {
                    iSum = iSum + iCnt;
                }
            iCnt++;
            SumFactorsR(No);          
        } 
    return iSum;
}

int main()
{
    int Value = 0;
    int iRet = 0;
    printf("Enter the number: \n");
    scanf("%d",&Value);

    iRet = SumFactorsR(Value);
    printf("Summation of Factors is : %d",iRet);

    return 0 ;
}