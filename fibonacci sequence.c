#include<stdio.h>
void main()
{
int i,n,f[100];
printf("N=");
scanf("%d",&n);
//initial value
f[0]=1;f[1]=1;
//recurrence relation
for(i=2;i<n;i++)
f[i]=f[i-1]+f[i-2];
//output sequence
printf("fibonacci sequence=\n");
for(i=0;i<n;i++)
    printf("%d\t",f[i]);
    printf("\n");
printf("%dth fibonacci number is %d",n,f[n-1]);
}
