#include<stdio.h>
int main() 
{
int i,n,sum=0;
printf("Enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("The sum of natural number:%d",sum);
return 0;
}
