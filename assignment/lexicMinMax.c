#include <stdio.h>
#include <string.h>

int main()
{
  char S1[1002], S2[1002], S3[1002];
  scanf("%s %s %s", S1, S2, S3);
  // min
  if (strcmp(S1, S2) <= 0 && strcmp(S1, S3) <= 0)
  {
    printf("%s\n", S1);
  }
  else if (strcmp(S2, S1) <= 0 && strcmp(S2, S3) <= 0)
  {
    printf("%s\n", S2);
  }
  else
  {
    printf("%s\n", S3);
  }
  // FOR MAXIMUM
  if (strcmp(S1, S2) >= 0 && strcmp(S1, S3) >= 0)
  {
    printf("%s\n", S1);
  }
  else if (strcmp(S2, S1) >= 0 && strcmp(S2, S3) >= 0)
  {
    printf("%s\n", S2);
  }
  else
  {
    printf("%s\n", S3);
  }

  return 0;
}
