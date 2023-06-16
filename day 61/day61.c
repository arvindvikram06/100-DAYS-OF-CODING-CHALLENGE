#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
       int k, c=0;
       scanf("%d", &k);
        for(int i = 0; i < k; i++)
            if(i%2 ==0)
                c+=3;
            else
                c-=1;
       printf("%d\n", c);
    }
	return 0;
}
