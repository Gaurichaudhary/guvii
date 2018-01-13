#include<stdio.h>
void main() 
{  int n,i,sum=0;
printf("Enter the range up to which you want to sum numbers");
printf("\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
sum+=i;
printf("%d",sum);
}

