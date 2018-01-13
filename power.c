#include<stdio.h>
void main()
{  int n,k,i,ans=1;
   printf("Enter the number\n");
   scanf("%d",&n);
   printf("Enter the power to this number\n");
   scanf("%d",&k);
   for(i=0;i<k;i++)
  { ans = ans*n;}
   printf("%d",ans);
 }
