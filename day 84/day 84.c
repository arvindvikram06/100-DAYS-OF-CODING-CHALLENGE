#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y,d;
	    scanf("%d%d",&x,&y);
      d=(x+y)/2;
      if(x>d)
       printf("%d \n",x-d);
      else
       printf("%d \n",y-d);
	}   
	return 0;
}
