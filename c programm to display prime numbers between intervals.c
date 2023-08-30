#include<stdio.h>
int main()
{
int start,end,num,count,prime,temp;
printf("ENTER START AND END VALUE \n");
scanf("%d%d",&start,&end);
if(start>end)
{
    temp=start;
    start=end;
    end=temp;
}
printf("PRIME NUMBERS BETWEEN %d AND %d ARE\n",start,end);
for(num=start;num<=end;num++)
{
    prime=1;
    for(count=2;count<num;count++)
    {
        if(num%count==0)
        {
            prime=0;
            break;
        }
        if(prime)
            printf("%d\t",num);
    }
}
return 0;

}
