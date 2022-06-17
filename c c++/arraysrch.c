#include<stdio.h>
int main(void)
{
  int numbers[100],limit,i,search,flag=0;
  printf("enter the limit");
  scanf("%d",&limit);
  printf("enter the numbers");
  for(i=0;i<limit;i++)
  {
      scanf("%d",&numbers[i]);
  }
  printf("enter the search key");
  scanf("%d",&search);
  for(i=0;i<limit;i++)
  {
      if(search==numbers[i])
     {
          flag=1;
          break;
      }
  }
  if(flag==1)
  {
      printf("the number is found at %d",i+1);
  }
  else
  {
       printf("value not found");
  }
  return 0;
}