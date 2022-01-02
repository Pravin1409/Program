#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
void Dispaly(char Fname[])
{
    int fd=0;
    char Buffer[1024];
    fd=open(Fname,O_RDWR);
    lseek(fd,0,0);
    read(fd,Buffer,12);
    write(1,Buffer,12);
}
int main()
{
    char Fname[30];
    printf("Enter file name:");
    scanf("%s",Fname);
    Dispaly(Fname);
    return 0;
}