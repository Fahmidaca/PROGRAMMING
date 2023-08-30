/*
 ENTER ANY NUMBER : 3
 num X i =num*i


 3 X 1 =3
 3 X 2 =6

 .........
 3 X 10 =30
 */
#include<stdio.h>
int main()
{
int num,i;
printf("ENTER ANY NUMBER :");
scanf("%d",&num);
for(int i=1; i<=10; i++)
{
printf("%d X %d =%d\n",num,i,num*i);
}
return 0;
}
