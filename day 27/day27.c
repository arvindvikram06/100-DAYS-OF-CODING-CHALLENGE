#include <stdio.h>

int main(void) {
	int test;
	int n,days,eat,final;
	scanf("%d",&test);
	for(int i=0;i<test;i++){
	    scanf("%d%d%d",&n,&days,&eat);
	    
	    final = eat*days;
	    if(final>=n){
	        printf("yes\n");
	    }else{
	        printf("no\n");
	    }
	    
	}
	return 0;
}
