#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd=0;
    char Fname[50];
    printf("enter file name:");
    scanf("%s",Fname);

    fd=creat(Fname,0777);
    if (fd==-1)
    {
        printf("Unable create.");
    }
    else
    {
        printf("Succesfullyn Creat file.");
    }
    
    
}