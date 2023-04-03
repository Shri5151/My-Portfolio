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
    char SourceFile [20];
    char DestFile [20];
    int fdSource = 0;
    int fdDest = 0;
    char Data [100];
    int Length = 0;
    printf("Enter the file name which contains the data :");
    scanf("%s",SourceFile);

    fdSource = open(SourceFile,O_RDONLY);
    if (fdSource == -1)
        {
            printf("Unable to open file \n");
            return -1;
        }

    printf("Enter the file name that you want to create : ");
    scanf("%s",DestFile);

    fdDest = creat(DestFile,0777);

    if (fdDest == -1)
        {
            printf("Unable to create new file \n");
            return -1;
        }

    while((Length = read(fdSource,Data,sizeof(Data))) != 0)
        {
            write(fdDest,Data,Length);
        }
    close(fdSource);
    close(fdDest);

    return 0;
}
















