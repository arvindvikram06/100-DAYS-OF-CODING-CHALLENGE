#include <stdio.h>

int main(void) {
	int t;
	scanf("%d\n",&t);
	while(t--){
	    int n,a[100],i;
	    int count=0;
	    scanf("%d\n",&n);
	    for(i=0;i<n;i++){
	        scanf("%d\n",&a[i]);
	    }
	    for(i=0;i<n;i++){
	    if((a[i]>=10 ) && (a[i]<=60)){
	        count++;
	    }
	}
	printf("%d\n",count);
	    
	}
	return 0;
}

