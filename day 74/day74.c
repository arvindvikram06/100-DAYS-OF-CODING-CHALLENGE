#include <stdio.h>

int main (void)
{
    int T;
    scanf("%d", &T);
    
    while(T--)
    {
        int n, c1=0, c2=0;
        scanf("%d", &n);
        char a[n];
        char b[n];
        scanf("%s%s", a, b);
        
        for(int i=0; i<n; i++)
        {
            
                if(a[i]=='1')
                {
                    c1++;
                }

                if(b[i]=='1')
                {
                    c2++;
                }
            
        }
        
        if(c1==c2)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        
    }
    
    return 0;
}
