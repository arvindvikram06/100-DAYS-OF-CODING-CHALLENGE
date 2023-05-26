include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c,d;
	    scanf("%d %d",&a,&b);
	    c=10*a;
	    d=5*b;
	    if(c>d)
	    {
	        printf("FIRST\n");
	    }
	    else if(d==c)
	    {
	        printf("ANY\n");
	    }
	    else
	    {
	        printf("SECOND\n");
	    }
	}
	return 0;
}
