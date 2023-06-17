#include <stdio.h>
#include<string.h>


int main(void) {

	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int l,i,temp;
	    int num[26],a[26]={0};
	    char str[100000];
	    int sum=0;
	    for(i=0;i<26;i++)
	    {
	        scanf("%d",&num[i]);
	    }
	    scanf("%s",str);
	    l=strlen(str);
	    for(i=0;i<l;i++)
	    {
	        
	        a[str[i]-97]++;
	    }
	    for(i=0;i<26;i++)
	    {
	        if(a[i]==0)
	        {
	            sum=sum+num[i];
	        }
	    }
	    printf("%d\n",sum);
	    
	}
	return 0;
}

