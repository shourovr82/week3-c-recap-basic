#include <stdio.h>

int main()
{
  int a, b;
  char s;
  scanf("%d %c%d", &a, &s, &b);

  if (s == '>')
  {
    // greater
    if (a > b)
    {
      printf("Right\n");
    }
    else
    {
      printf("Wrong\n");
    }
  }
  else if (s == '<')
  {
    // lesser
    if (a < b)
    {
      printf("Right\n");
    }
    else
    {
      printf("Wrong\n");
    }
  }
  else
  {
    // equal
    if (a == b)
    {
      printf("Right\n");
    }
    else
    {
      printf("Wrong\n");
    }
  }

  return 0;
}