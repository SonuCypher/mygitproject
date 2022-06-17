#include<stdio.h>
#include<stdlib.h>
int main()
{   int i;
    char name[10][100];
    printf("enter name");
    for(i=0;i<5;i++)
    {
        scanf("%s",name[i]);
    }
    printf("entered names are");
    for(i=0;i<5;i++)
    {
    printf(" %s " ,name[i]);
    }
    return 0;
}