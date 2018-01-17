#include <stdio.h>

int main()
{
    int n,a,d,i,sum;
    scanf("%d %d %d",&n,&a,&d);
    if(n>=1&&a>=1&&d>=1&&n<=100000&&a<=100000&&d<=100000){
        sum = (n * (2 * a + (n - 1)* d ))/ 2;
        printf("%d",sum);
    }
    return 0;
}
