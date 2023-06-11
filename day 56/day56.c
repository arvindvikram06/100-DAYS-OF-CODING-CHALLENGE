#include <stdio.h>
#include <string.h>

int main(void) {
    int test;
    int c;
    scanf("%d", &test);
    for (int i = 0; i < test; i++) {
        char str[100001];
        scanf("%s", str);
        int len = strlen(str);
        str[len] = '\0';
        int t = len / 2;
        int count = 0;
        if (len % 2 == 0) {
            c = len / 2;
        } else {
            c = (len / 2) + 1;
        }

        for (int j = 0; j < t; j++) {
            for (int k = c; k < len; k++) {
                if (str[j] == str[k]) {
                    count++;
                    str[k] = 0;
                    break;
                }
            }
        }
     (count == len / 2) ? printf("YES\n") : printf("NO\n");
         
    }
    return 0;
}
