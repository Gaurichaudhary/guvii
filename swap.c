#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a<=100000&&b<=100000){
    c=a;
    a=b;
    b=c;
    printf("%d %d",a,b);}
}
