#include<stdio.h>

int main()
{
  char ch;
  
  scanf("%c", &ch);
  
  if('a' <= ch && ch <= 'z'){
    // lowercase
    ch -= 32;
  } else{
    // uppercase
    ch += 32;
  }
  
  printf("%c\n",ch);
  return 0;
}