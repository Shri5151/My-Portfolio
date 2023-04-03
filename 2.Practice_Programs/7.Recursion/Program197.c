//  26  (Input)
// Display factors 

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


void DisplayFactorsR(int No)
{
    static int iCnt = 1;
    if (iCnt <= (No/2))
        {    
            if (No % iCnt == 0)
                {
                    printf("%d\n",iCnt);
                }
            iCnt++;
            DisplayFactorsR(No);          
        } 
}

int main()
{
    int Value = 0;
    printf("Enter the number: \n");
    scanf("%d",&Value);

    DisplayFactorsR(Value);

    return 0 ;
}