#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    char Fname[30];
    printf("Enter file name:");
    scanf("%s",Fname);
    fd=open(Fname,O_RDONLY);
    if (fd==-1)
    {
        printf("Unablen OPen\n");
    }
    else
    {
        printf("succesfully open.");
    }
    
}