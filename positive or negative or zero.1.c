//input num
//positive/negative/zero
#include<stdio.h>
int main()
{
  int num;
  printf("ENTER ANY NUMBER:") ;
  scanf("%d",&num);
  if (num>0)
    printf("POSITIVE");
  else if(num<0)
    printf("NEGATIVE");
  else
    printf("ZERO");
  return 0;
}
