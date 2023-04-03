#include<stdio.h>

void User_Display(int iNo)
{
    //register int i = 0;
    /*for(i = 1 ;i <=iNo ;i++ )
    {
        printf("marvellous :%d\n",i);
    }*/
    printf("while\n");
    register int i = 1 ;
    while(i <=iNo  )
    {
        printf("marvellous :%d\n",i);
        i++;
    }
}

int main()
{
    int iNum =0;
    printf("Enter the last number till u want tu display\n");
    scanf("%d",&iNum);
    
    User_Display(iNum);

    return 0;
}