#include<stdio.h>
int main() {
  int a,b,c;
  printf("Enter first number:\n");
  scanf("%d",&a);
   printf("Enter second number:\n");
  scanf("%d",&b);
   printf("Enter third number:\n");
  scanf("%d",&c);
  if(a>b&&a>c)
    printf("%d",a);
  if(b>a&&b>c)
    printf("%d",b);
  else
    printf("%d",c);
  return 0;
}
