#include<stdio.h>
void main()
{ const int n;  
  int k,i,a[n],sum=0;
  printf("enter the value of n\n");
  scanf("%d",&n);
  printf("Enter the value of k\n");
  scanf("%d",&k);
  printf("Enter the values of array\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<k;i++)
  sum=sum+a[i];
  printf("%d",sum);
}
  
  
