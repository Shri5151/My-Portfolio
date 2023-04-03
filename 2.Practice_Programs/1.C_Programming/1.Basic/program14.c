#include<stdio.h>


void Display()
{
    register int  iCnt1 = 0;
    
    printf("____________________________________\n");
    
    printf("Printing using FOR loop\n");
    for (iCnt1 = 0; iCnt1 < 5; iCnt1++)
    {
        printf("\tJay Ganesh\n");
    }
    printf("____________________________________\n");
    
    printf("Printing using WHILE loop\n");
    
    register int iCnt2=0;
    while (iCnt2<5)
    {
        printf("\tJay Ganesh\n");
        iCnt2++;
    }

    printf("____________________________________\n");

    printf("Printing using DO-WHILE loop\n");
    
    register int iCnt3=0;
    do
    {
        printf("\tJay Ganesh\n");
        iCnt3++;

    }while(iCnt3 < 5);
    printf("____________________________________\n");

}


void User_Display(int iRep)
{
    register int  iCnt1 = 0;
    
    printf("____________________________________\n");
    
    printf("Printing using FOR loop\n");
    for (iCnt1 = 0; iCnt1 < iRep; iCnt1++)
    {
        printf("\tJay Ganesh\n");
    }
    printf("____________________________________\n");
    
    printf("Printing using WHILE loop\n");
    
    register int iCnt2=0;
    while (iCnt2<iRep)
    {
        printf("\tJay Ganesh\n");
        iCnt2++;
    }

    printf("____________________________________\n");

    printf("Printing using DO-WHILE loop\n");
    
    register int iCnt3=0;
    do
    {
        printf("\tJay Ganesh\n");
        iCnt3++;

    }while(iCnt3 < iRep);
    printf("____________________________________\n");


}

int main()
{
    int iNum =0;
    printf("Enter the Number of times you want to display Jay Ganesh on screen\n");
    scanf("%d",&iNum);
    
    User_Display(iNum);

    return 0;
}