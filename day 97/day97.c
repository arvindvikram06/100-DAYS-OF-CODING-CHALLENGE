#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int n,a=0,b=0;
	    scanf("%d",&n);
	    char s[n],p='A';
	    scanf("%s",s);
	    for(int j=0;j<n;j++)
	    {
	        if( (s[j]=='A') && (p=='A') )
	        {
	            a++;
	        }
	        else if( (s[j]=='A') && (p=='B') )
	        {
	            p='A';
	        }
	        else if( (s[j]=='B') && (p=='B') )
	        {
	            b++;
	        }
	        else if( (s[j]=='B') && (p=='A') )
	        {
	            p='B';
	        }
	    }
	    printf("%d %d\n",a,b);
	}
	return 0;
}
