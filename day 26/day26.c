#include <stdio.h>
#include <string.h>

int main(void) {
    int test;
    scanf("%d", &test);
    for (int t = 0; t < test; t++) {
        int count = 0;
        char arr[1000];
        scanf("%s", arr);
        int length = strlen(arr);
        arr[length] = '\0'; // Add null terminator

        for (int i = 0; i < length - 2; i++) {
            if ((arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') &&
                (arr[i + 1] == 'a' || arr[i + 1] == 'e' || arr[i + 1] == 'i' || arr[i + 1] == 'o' || arr[i + 1] == 'u') &&
                (arr[i + 2] == 'a' || arr[i + 2] == 'e' || arr[i + 2] == 'i' || arr[i + 2] == 'o' || arr[i + 2] == 'u')) {
                count++;
                break;
            }
        }
        if (count == 1) {
            printf("Happy\n");
        } else {
            printf("Sad\n");
        }
    }
    return 0;
}
