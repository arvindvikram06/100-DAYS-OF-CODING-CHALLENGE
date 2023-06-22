#include <stdio.h>

int main(void) {
    int test;
    scanf("%d",&test);
    while(test--){
        int N;
        scanf("%d",&N);
        int num[1001]={0};
        int size,max=0,count=0;
        for(int i = 0;i<N;i++){
            scanf("%d",&size);
            num[size]++;
            if(num[size]>max){
                max=num[size];
            }
        }
        
        for(int i = 0;i<1001;i++){
                 if(num[i]==max){
                count++;
        }   
        }
        
        (count>=2)?printf("NO\n"):printf("YES\n");
    }
	return 0;
}
