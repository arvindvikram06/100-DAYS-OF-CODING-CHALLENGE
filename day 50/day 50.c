#include <stdio.h>

int main(void) {
	
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,m;
	    scanf("%d %d",&n,&m);
	  if(m>=n)
	  printf("%d\n",n);
	  else printf("%d\n",2*n-m);
	    
	    
	    
	}
	return 0;
}
