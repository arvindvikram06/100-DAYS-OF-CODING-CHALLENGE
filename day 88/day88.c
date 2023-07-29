#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    int n,x,temp=0,first=0,a[1000],b[1000];
	    scanf("%d",&n);
	    for(x=0;x<n;x++){
	    scanf("%d",&a[x]);
	    }
	     for(x=0;x<n;x++){
	    scanf("%d",&b[x]);
	    }
	    	     for(x=0;x<n;x++){
	    if((a[x]!=0)&&(b[x]!=0))
	   { first=first+1;
	       if(first>=temp)
	        temp=first;
	   }
	    else
	    first=0;
	    }
	   printf("%d\n",temp);
	    }
}
