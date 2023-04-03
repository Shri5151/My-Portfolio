#include<stdio.h>

int main(int argc, char *argv[])
{
    printf("Number of argument are : %d \n",argc);

    printf("Name of Executable  is : %s\n",argv[0]);

    printf("Argument given : %s",argv[1]);

    return 0;
}