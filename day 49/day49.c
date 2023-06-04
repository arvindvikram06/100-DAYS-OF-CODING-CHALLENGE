#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k,max=0,sum=0;
	    scanf("%d%d",&n,&k);
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    for(int i=0;i<=n-k;i++)
	    {
	        sum=0;
	        int temp=i;
	        for(int j=0;j<k;j++)
	        {
	            sum=sum+arr[temp];
	            temp++;
	        }
	        if(sum>max)
	        max=sum;
	        
	    }
	    printf("%d\n",max);
	}
	return 0;
}

