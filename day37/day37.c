#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        int a=100;
        int b=200;
        int c=300;
        scanf("%d",&n);
        if(n<a) {
            printf("Easy\n");
        } else if(n>=a && n<b) {
            printf("Medium\n");
        } else {
            printf("Hard\n");
        }
    }
return 0;
}
