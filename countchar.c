#include <stdio.h>

int main()
{    char a[100];
     int i,count=0;
     scanf("%[^\t]s",a);
     for(i=0;a[i]!=NULL;i++){
         if(a[i]!=' ')
         count++;}
         printf("%d",(count-1));
     

    return 0;
}
