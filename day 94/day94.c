#include <stdio.h>

int main(void) {
  // your code goes here
  int t;
  scanf("%i", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    int digit;
    int holidays = n + 8;
    for (int i = 0; i < n; i++) {
      scanf("%d", &digit);
      if (digit % 7 == 0 || digit % 7 == 6) {
        holidays--;
      }
    }
    printf("%d\n", holidays);
  }
  return 0;
}
