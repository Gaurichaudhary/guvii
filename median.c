#include<stdio.h>
void main()
{  int a[1000],n,i,j,temp,med;
   scanf("%d",&n);
   if(n>=1&&n<=1000){
   for(i=0;i<n;i++)
   scanf("%d ",&a[i]);
   for(i=0;i<n;i++)
   {for(j=0;j<n-i-1;j++)
    {  if(a[j]>a[j+1])
         {  temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;} }
   }
    med=n/2;
    printf("%d",a[med]);
  
}}
