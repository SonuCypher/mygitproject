#include<stdio.h>
void main()
{
    int array[100],i,limit,num=0;
    printf("enter the limit of array");
    scanf("%d",&limit);
    printf("enter the arrays");
    for(i=0;i<limit;i++){
        scanf("%d",&array[i]);
        }
    for(i=0;i<limit;i++){
        if(array[i] % 2 == 0){
            num++;
        }
    }printf("the number %d",num);
    
    
   
}