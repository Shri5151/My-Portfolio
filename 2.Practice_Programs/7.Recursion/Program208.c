//  Shrinivas (Input)
// display function 

#include<stdio.h>

int SumArr(int Arr[],int iSize)
{
    static int iCnt = 0;
    static int Sum = 0;
    if(iCnt < iSize  )
        {
            Sum = Sum + Arr[iCnt];
            iCnt++;
            SumArr(Arr,iSize);
        }
    return Sum;
}



int main()
{
    int Arr [5]= {10,20,30,40,50};
    int iRet = 0;

    iRet =SumArr(Arr,5);
    printf("Addition is  : %d ",iRet);
    return 0 ;
}