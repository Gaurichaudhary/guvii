#include <stdio.h>
#include<string.h>

int main()
{    char a[100];
     int i,count=0;
     scanf("%[^\t]s",a);
     if(strlen(a)<=1000){
     for(i=0;a[i]!=NULL;i++){
         if(a[i]=='\n')
         count++;}
         printf("%d",(count));
     

    return 0;}
}
