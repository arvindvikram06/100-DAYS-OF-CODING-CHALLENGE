#include <stdio.h>
#include <string.h>

int main(void) {
    char S[26];
    scanf("%s", S);
    int test;
    scanf("%d", &test);

    while (test--) {
        int count = 0;
        char string[12];
        scanf("%s", string);
        for (int i = 0; i < strlen(string); i++) {
            for (int j = 0; j < strlen(S); j++) {
                if (string[i] == S[j]) {
                    count++;
                    break;
                }
            }
        }
        count == strlen(string) ? printf("Yes\n") : printf("No\n");
    }
    return 0;
}
