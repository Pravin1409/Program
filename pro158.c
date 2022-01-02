// accept file name from user and create file
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    int fd=0;
    char Fname[30];
    printf("Enter file name:-");
    scanf("%s",Fname);
    fd=creat(Fname,0777);
    if (fd==-1)
    {
        printf("unable create file \n");
    }
    else
    {
        printf("Succesfully create file ");
    }
    
    return 0;
}