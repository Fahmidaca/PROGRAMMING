#include<stdio.h>
int main()
{
double num1,num2;
char op;
printf("ENTER AN OPERATOR(+,-,*,/):");
scanf("%c",&op);
printf("ENTER TWO NUMBERS:");
scanf("%lf%lf",&num1,&num2);
switch(op)
{
case'+':
    {
    printf("%lf+%lf=%lf\n",num1,num2,num1+num2);
    break;
    }
    case'-':
    {
    printf("%lf-%lf=%lf\n",num1,num2,num1-num2);
    break;
    }
    case'*':
    {
    printf("%lf*%lf=%lf\n",num1,num2,num1*num2);
    break;
    }
    case'/':
    {
    printf("%lf/%lf=%lf\n",num1,num2,num1/num2);
    break;
    }
    default:
        printf("NOT A VALID OPERATOR\n");


}
return 0;
}
