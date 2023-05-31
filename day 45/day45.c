#include <stdio.h>

int main(void) {
	int test,a,b,c;
	scanf("%d",&test);
	for(int i=0;i<test;i++){
	    scanf("%d",&a);
	    scanf("%d",&b);
	    c = (b*100)/a;
	    
	    if(c>=50){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	}
	return 0;
}

