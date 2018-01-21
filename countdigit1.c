#include <stdio.h>
#include<string.h>
 
int main()
{
    char str[1000];
    int i,count=0;
    gets(str);
   if(strlen(str)<=1000){
    for(i=0;i<strlen(str);i++)
    {  if(isdigit(str[i]))
         count++; }
    printf("%d",count);
    
    return 0;}
}
