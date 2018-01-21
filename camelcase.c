


#include<stdio.h>
#include<string.h>
int main()
{
    char  a[1000000];
    int i;
   scanf("%[^\t]s",a);
    if(strlen(a)<=1000000){
      if(a[0]>=97)
        a[0]=a[0]-32;
    for(i=0;i<strlen(a);i++)
    {  if(a[i]==' '||a[i]=='\t'||a[i]=='\n')
        if(a[i+1]>=97){
        a[i+1]=a[i+1]-32;}
    }
    printf("%s",a);
    return 0;}
}
