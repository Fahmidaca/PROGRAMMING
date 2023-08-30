#include<stdio.h>
int main()
{
int num,temp,r,sum=0;
printf("ENTER ANY NUMBER:");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
    r=temp%10;
    sum=sum*10+r;
    temp=temp/10;
}
if(num==sum)
    printf("PALINDROME NUMBER");
else
    printf("NOT PALINDROME");
return 0;
}
