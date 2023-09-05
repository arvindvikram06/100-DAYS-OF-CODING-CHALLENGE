#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	while(t!=0)
	{
	    int n,k;
	    scanf("%d %d",&n,&k);
	    char s[n+1];
	    scanf("%s",s);
	    if(!strncmp(s,"1",1))
	    {
	        printf("%s",s);
	        for(int i=0;i<k;i++)
	        {
	            printf("0");
	        }
	    }
	    else
	    {
	        s[0]=1+'0';
	        printf("%s",s);
	        for(int i=0;i<k-1;i++)
	        {
	            printf("0");
	        }
	    }
	    printf("\n");
	    t--;
	}
	return 0;
}
