#include<stdio.h>
void main()
{  int a[100000],n,i,j,temp;
   printf("Enter the value of n\n");
   scanf("%d",&n);
   if(n>=1&&n<=1000){
   printf("Enter the elements\n");
   for(i=0;i<n;i++)
   scanf("%d ",&a[i]);
   for(i=0;i<n;i++)
   {for(j=0;j<n-i-1;j++)
    {  if(a[j]>a[j+1])
         {  temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;} }
       
   }
   for(i=0;i<n;i++)
   printf("%d ",a[i]);
}}
