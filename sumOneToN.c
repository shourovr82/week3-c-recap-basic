
#include <stdio.h>

int main()
{
  int n;

  scanf("%d", &n);

  //
  long long sum = (1LL * (n + 1) * n) / 2;

  // for loop time exceeded
  // for (int i = 0; i <= n; i++)
  // {
  //   sum += i;
  // }
  printf("%lld", sum);

  return 0;
}