#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for (int j=0; j<=n; j++)
        {
            a[j]=0;
        }
        int count=0, num=0,c;
        for (int i=0; i<n; i++)
        {
            scanf("%d",&c);
            if (a[c]==0)
            {
                a[c]=1;
                count++;
            }
            else
            {
                a[c]=0;
                count--;
            }
            if (num<count)
            {
                num++;
            }
        }
        printf("%d\n",num);
    }
	
	return 0;
}
