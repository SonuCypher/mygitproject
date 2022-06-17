#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
    printf("finished %d ",i);
    if(i==5)
        {
            break;
        }
    printf("its in the middle %d",i);  
    }
    
    printf("end");
    return 0;
}