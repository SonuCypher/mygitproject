#include<stdio.h>
int main(void)
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
    return 0;
}