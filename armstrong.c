#include <stdio.h>
int main()
{ int n,m,i,s=0,r;
  printf("Enter the number\n");
  scanf("%d",&n);
  m=n;
  while(n>0){
  r=n%10;
  s=s+r*r*r;
  n=n/10; }
  if(s==m)
  printf("yes");
  else
  printf("no");
  return 0;
}
