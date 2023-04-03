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
    printf("Enter the file name that you want to open :");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR | O_APPEND);

    if(fd == -1)
        {
            return -1;            
        }
    printf("File is successfully Opened with FD %d\n",fd);
    printf("Enter the data that you want to write in the file :");
    scanf(" %[^'\n']s",Data);
    
    Length = strlen(Data);

//  write(kashat,kay,kiti);
    write(fd,Data,Length);

    return 0;
}
















