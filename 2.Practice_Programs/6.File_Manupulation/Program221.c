#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
// O_RDONLY -------- open for reading
// O_WRONLY -------- open for writing 
// O_RDWR -------- open for reading and write


int main()
{
    char Fname [20];
    int fd = 0;
    char Data [100];
    int Length = 0;
    int iCount = 0, i = 0;

    printf("Enter the file name that you want to open :");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);
    if (fd == -1)
        {
            printf("Unable to open file \n");
            return -1;
        }
    while((Length = read(fd,Data,sizeof(Data))) != 0)
        {
            for (i = 0; i < Length ; i++)
                {
                    if((Data[i]>= 'a')&&(Data[i]<= 'z'))
                        {
                            iCount++;
                        }
                }
        }
    printf("Number of smallcase letter are  : %d",iCount);
    close(fd);

    return 0;
}
















