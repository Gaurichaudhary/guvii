#include<stdio.h>
void main()
{  int a[100000],n,i,max=9999;
   printf("Enter the value of n\n");
   scanf("%d",&n);
   if(n>=1&&n<=100000){
   printf("Enter the elements\n");
   for(i=0;i<n;i++)
   scanf("%d ",&a[i]);
   for(i=0;i<n;i++)
   {
        if(max>a[i])
        max=a[i];
   }
   printf("%d",max);}
}
