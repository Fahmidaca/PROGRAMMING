#include<stdio.h>
void main()
{
int num,sum=0,sq,rem;
printf("ENTER ANY NUMBER:");
scanf("%d",&num);
sq=num*num;
while(sq!=0)
{
    rem=sq%10;
    sum=sum+rem;
    sq=sq/10;
}
if(num==sum)
    printf("%d is a Neon number",num);
else
    printf("%d is not a Neon number",num);
}
