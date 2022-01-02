// Creat file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
int fd=0;
fd=creat("Marvellous.txt",0777);
if (fd==-1)
{
    printf("unable create file\n");
}
else
{
    printf("cerate succesfully\n");
}

    return 0;
}