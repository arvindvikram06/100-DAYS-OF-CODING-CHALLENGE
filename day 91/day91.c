#include <stdio.h>
#include<string.h>

int main(void) {
	int t,i,j,k;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    k=0;
	    char s[1000];
	    scanf("%s",s);
	    for(j=0;j<strlen(s);j++)
	    {
	        if(s[j]>=48&&s[j]<=57)
	        {
	            k+=s[j]-48;
	        }
	    }
	    printf("%d\n",k);
	}
	return 0;
}
