#include<stdio.h>
void sum();
void fun();
int main()
{
    sum();
    printf("hi how are you\n");
    fun();
    return (0);
}
void fun()
{
     int num[100][100],ilimit,jlimit,i,j;
    printf("enter the limit");
    scanf("%d%d",&ilimit,&jlimit);
    printf("enter the numbers");
    for(i=0;i<ilimit;i++)
    {
        for(j=0;j<jlimit;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    printf("\tthe entered numbers are\n");
    for (i=0;i<ilimit;i++)
    {
        for(j=0;j<jlimit;j++)
        {
            printf("%d ",num[i][j]);
        }
    printf("\n");
    }
}
void sum()
{
    int a,b,c;
    printf("enter two numbers\t");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d",c);
}