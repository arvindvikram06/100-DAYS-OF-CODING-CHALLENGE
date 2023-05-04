#include <stdio.h>

int main(void) {
    int test,no,count;
    scanf("%d",&test);
    for (int i=0;i<test;i++) {
        scanf("%d", &no);
        int arr[no];
        count = 0;
        for (int j=0;j<no;j++) {
            scanf("%d", &arr[j]);
        }
        for (int k=0;k<no;k++) {
            for (int m=k + 1;m<no;m++) {
                if (arr[k] == arr[m]) {
                    count++;
                    break;
                }
            }
        }
        printf("%d\n", no-count);
    }

    return 0;
}

