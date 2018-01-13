#include<stdio.h>
void main()
{  int n,m,i,r,s=0;
   printf("Enter the number\n");
   scanf("%d",&n);
   if(n<=1000)
 {  m=n;
   while(m>0)
  { r=m%10;
   s=s*10+r;
   m=m/10;}
   if(s==n)
   printf("yes");
   else
   printf("no");}
}
   
