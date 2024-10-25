
#include <stdio.h>

int main()
{
  int N, T;
  int bookRead;

  scanf("%d %d", &N, &T);

  int timesArr[N];
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &timesArr[i]);
  }

  int bookReadTime;

  for (int i = 0; i < N; i++)
  {
    bookReadTime += timesArr[i];

    if (bookReadTime > T)
      break;
    bookRead++;
  }

  printf("%d", bookRead);

  return 0;
}