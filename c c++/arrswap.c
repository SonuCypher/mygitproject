#include<stdio.h>
void main()
{
    int array1[100],array2[100],limit,i,j,temp=0,p;
    printf("enter the limit");
    scanf("%d",&limit);
    printf("enter the array1 numbers\n");
    for(int i=0;i<limit;i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("enter the array2 numbers\n");
    for(int j=0;j<limit;j++)
    {
        scanf("%d",&array2[j]);
    }
    printf("array1:");
    for(int i=0;i<limit;i++)
    {
        printf("%d ",array1[i]);
    }
    printf("array2:");
    for(int j=0;j<limit;j++)
    {
        printf("%d ",array2[j]);
    }
    for(p=0;p<limit;p++)
    {
    temp=array1[p];
    array1[p]=array2[p];
    array2[p]=temp;
    }
     printf("array1:");
    for(int i=0;i<limit;i++)
    {
        printf("%d ",array1[i]);
    }
    printf("array2:");
    for(int j=0;j<limit;j++)
    {
        printf("%d ",array2[j]);
    }
}