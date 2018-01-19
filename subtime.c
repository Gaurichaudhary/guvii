#include <stdio.h>

int main()
{
    int h1,m1,h2,m2,m11,m22,t1,t2,t11,h3,m3;
    scanf("%d %d\n",&h1,&m1);
    scanf("%d %d",&h2,&m2);
    m11=h1*60;
    m22=h2*60;
    t1=m11+m1;
    t2=m22+m2;
    t11=t1-t2;
    h3=t11/60;
    m3=t11%60;
    printf("%d %d",h3,m3);
    

}
