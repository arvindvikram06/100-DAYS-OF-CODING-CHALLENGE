#include <stdio.h>

int main()
{
    int t,n;
    scanf("%d", &t);
    
    while (t--)
    {
        int  count = 0;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j] == arr[j+1])
            {
                count++;
            }
        }
        printf("%d\n", n-count);
    }
    
    return 0;
}
