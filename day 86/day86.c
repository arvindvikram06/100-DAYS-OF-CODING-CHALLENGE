#include <stdio.h>

int main(void) {
	int t,r1,r2,w1,w2,c1,c2;
	scanf("%d",&t);
	for (int i=1;i<=t;i++){
	    scanf("%d %d %d",&r1,&w1,&c1);
	    scanf("%d %d %d",&r2,&w2,&c2);
	    if ((r1>r2 && w1>w2) || (r1>r2 && c1>c2) || (c1>c2 && w1>w2)){
	        printf("A\n");
	    }
	        else{
	        printf("B\n");
	    }
	}
}

