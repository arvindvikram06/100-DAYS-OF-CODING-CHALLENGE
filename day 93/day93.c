#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,i,max;
	    scanf("%d",&n);
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    max=0;
	    for(i=0;i<n;i++)
	    {
	        //max=0;
	        for(int j=1;j<=7;j++)
	        {
	            if(j==a[i])
	            {
	                if(i>=max)
	                {
	                    max=i;
	                }
	            }
	        }
	     }
	     printf("%d\n",max+1);
	}
	return 0;
}
