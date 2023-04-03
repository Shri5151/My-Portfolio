//  Shrinivas (Input)
// display function 

#include<stdio.h>
void Display(int Arr[],int iSize)
{
    int iCnt = 0;
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            printf("%d\t",Arr[iCnt]);
        }
}

void DisplayI(int Arr[],int iSize)
{
    int iCnt = 0;
    while(iCnt < iSize  )
        {
            printf("%d\t",Arr[iCnt]);
            iCnt++;
        }
}
void DisplayR(int Arr[],int iSize)
{
    static int iCnt = 0;
    if(iCnt < iSize  )
        {
            printf("%d\t",Arr[iCnt]);
            iCnt++;
            DisplayR(Arr,iSize);
        }
}



int main()
{
    int Arr [5]= {10,20,30,40,50};

    DisplayR(Arr,5);

    return 0 ;
}