//C PROGRAMM TO FIND THE LARGEST NUMBER AMONG THREE NUMBERS
#include<stdio.h>
int main()
{
int a,b,c;
printf("TYPE THREE NUMBERS :");
scanf("%d%d%d", &a,&b,&c);
if(a>b && a>c)
    printf("HIGHEST NO IS=%d\n",a);
else if(b>a && b>c)
    printf("HIGHEST NO IS=%d\n",b);
else
    printf("HIGHEST NO IS=%d\n",c);
    return 0;

}
