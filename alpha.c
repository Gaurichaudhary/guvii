#include<stdio.h>
int main() {
  char a;
  printf("Enter a character:\n");
  scanf("%c",&a);
  if(a>='a'&&a<='z'|| a>='A'&&a<='Z')
  printf("Alphabet");
  else
  printf("No");
  return 0;
}
