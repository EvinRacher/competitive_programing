#include <stdio.h>

int main() {
  int t, i = 1;
  scanf("%i", &t);
  while (i <= t) {
    int n, x = 1, max_v = 0;
    scanf("%i", &n);
    while (x <= n) {
      int c_v;
      scanf("%i", &c_v);
      if (c_v > max_v)
        max_v = c_v;
      x++;
    }
    printf("Case %i: %i\n", i, max_v);
    i++;
  }
  return 0;
}
