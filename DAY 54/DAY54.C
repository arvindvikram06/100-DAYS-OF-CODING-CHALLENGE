#include <stdio.h>

int main(void) {
	int test;
	scanf("%d",&test);
	while(test--){
	    int N;
	    scanf("%d",&N);
	    char s[N];
	    int count[N],flag=0;
	    scanf("%s",s);
	    for(int i = 0;i < N; i++){
	        count[i]=0;
	        for(int j = 0 ;j < N;j++){
	            if(s[i] == s[j]){
	                count[i]++;
	            }
	        }
	    }
	    for(int k =0;k<N;k++){
	        if(count[k]>=2){
	            flag++;
	        }
	    }
	    if(flag>=1){
	        printf("%d\n",N-2);
	    }
	    else{
	        printf("-1\n");
	    }
	}
	return 0;
}
