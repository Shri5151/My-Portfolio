#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

// O_RDONLY -------- open for reading
// O_WRONLY -------- open for writing 
// O_RDWR -------- open for reading and write



int main()
{
    char Fname [20];
    int fd = 0;

    printf("Enter the file name that you want to open :");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
        {
            printf("Unable to open file \n");
        }
    else
        {
            printf("File is successfully Opened with FD %d\n",fd);
        }

    return 0;
}