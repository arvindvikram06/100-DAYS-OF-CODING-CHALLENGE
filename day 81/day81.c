#include <stdio.h>
#include <string.h>

int main(void) {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int size, temp = 0, flag = 0, array1[26] = {0};
        scanf("%d", &size);
        
        char str[1000001];
        scanf("%s", str);
        
        if (size % 2 == 0) {
            for (int i = 0; i < size; i++) {
                array1[str[i] - 'a']++;
            }
        } else {
            flag++;
        }
        
        for (int j = 0; j < 26; j++) {
            if (array1[j] % 2 != 0) {
                flag++;
            }
        }
        
        if (flag != 0) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }
    
    return 0;
}
