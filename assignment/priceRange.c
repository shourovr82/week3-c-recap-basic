
#include <stdio.h>

int main()
{
  int N, X, Y;
  scanf("%d %d %d", &N, &X, &Y);

  int samplePhonePrices[N];
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &samplePhonePrices[i]);
  }

  int availablePhones = 0;

  for (int i = 0; i < N; i++)
  {
    int phonePrice = samplePhonePrices[i];
    if (phonePrice >= X && phonePrice <= Y)
    {
      availablePhones++;
    }
  }

  printf("%d", availablePhones);

  return 0;
}