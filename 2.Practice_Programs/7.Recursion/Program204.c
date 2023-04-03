//  Shrinivas (Input)
// display function 

#include<stdio.h>
void Display(char *Str)
{
    if(*Str != '\0')
        {
            printf("%s\n",Str);
            Str++;
            Display(Str);
        }
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string: \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0 ;
}