#include <stdio.h>
#include<string.h>
 
int main()
{
    char a[1000],i,count=0;
    gets(a);
    for(i=0;i<strlen(a);i++)
    {if(isdigit(a[i]))
      count++; 
    }
    printf("%d",count);
}
