#include <stdio.h>
#include <string.h>

int main(void) {
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++) {
        int flag = 0;
        int n;
        scanf("%d", &n);
        char arr[n];
        scanf("%s", arr);
        for (int i = 0; i <n; i++) {
            if (arr[i] == '5' || arr[i] == '0') {
                printf("Yes\n");
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("No\n");
        }
    }
    return 0;
}
