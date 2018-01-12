#include<stdio.h>
void main() {
  char a;
  printf("Enter a character:\n");
  scanf("%c",&a);
  if(a=='a'|| a=='e' || a=='i'||a=='o'||a=='u')
    printf("Vowel");
  else
    printf("Consonant");
}
