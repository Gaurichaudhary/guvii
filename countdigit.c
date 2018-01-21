#include <stdio.h>
#include<string.h>
 
int main()
{
    char   str[1000];
    int countSpecialChar;
    int counter;
    countSpecialChar=0;
    gets(str);
    if(strlen(str)<=1000){
 
    for(counter=0;str[counter]!=NULL;counter++)
    {
 
        if(str[counter]>='0' && str[counter]<='9')
            {  }
        else if((str[counter]>='A' && str[counter]<='Z')||(str[counter]>='a' && str[counter]<='z'))
            { }
        else if(str[counter]==' ')
            { }
        else
            countSpecialChar++;
    }
 
    printf("%d",countSpecialChar);
    
    return 0;}
}
