#include<string.h>
#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int n,a[4]={0},c=0,e=0;
	    scanf("%d",&n);
	    char s[1001];
	    for(int i=0;i<n;i++)
	    {
	         scanf("%s",s);
	         int l=strlen(s);
	         for(int j=0;j<l;j++)
	         {
	             switch (s[j])
	             {
	                case 'c' : c++;break;
	                case 'e' : e++;break;
	                case 'o' : a[0]++;break;
	                case 'd' : a[1]++;break;
	                case 'h' : a[2]++;break;
	                case 'f' : a[3]++;break;
	             }
	         }
	    }
	    for(int i=1;i<4;i++)
	    {
	        if(a[0]>a[i])
	        a[0]=a[i];
	    }
	    if(c>e)
	    c=e;
	    c/=2;
	    if(a[0]<c)
	    printf("%d\n",a[0]);
	    else
	    printf("%d\n",c);
	}
	return 0;
}
