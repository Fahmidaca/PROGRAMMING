#include<stdio.h>
int main()
{
int num,temp,r,sum=0;
printf("ENTER ANY NUMBER:");
scanf("%d",&num);
temp = num;
while(temp!=0)
{
    r = temp % 10;
    sum = sum + r*r*r;
    temp = temp / 10;
}
if(sum == num)
{
    printf("ARMSTRONG NUMBER");
}
else
    printf("NOT ARMSTRONG NUMBER");
return 0;
}
