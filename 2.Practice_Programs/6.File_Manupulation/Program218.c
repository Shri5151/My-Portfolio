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

    fd = open(Fname,O_RDWR);

    if(fd == -1)
        {
            return -1;            
        }
    printf("File is successfully Opened with FD %d\n",fd);
    Length = read(fd,Data,13);
    printf("Data from file is : \n");
    write(1,Data,Length); 
    
    close(fd);
    return 0;
}
















