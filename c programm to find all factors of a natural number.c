#include<stdio.h>
int main()
{
    int num,count;
    printf("ENTER A NUMBER TO FIND FACTORS\n");
    scanf("%d",&num);
    printf("FACTORS OF %d ARE\n",num);
    for(count=1;count<=num;count++)
    {
    if(num%count==0)
        printf("%d\n",count);
    }
    return 0;
}
