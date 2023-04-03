#include <stdio.h>

void DisplayBinary(unsigned int No)
{
    int iDigit = 0;

    while(No != 0)
    {
        iDigit = No % 2;
        printf("%d",iDigit);
        No = No / 2;
    }

    printf("\n");


}



int main()
{
    unsigned int value = 11;

    DisplayBinary(value);

    return 0;
}