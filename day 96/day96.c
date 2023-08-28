#include <stdio.h>
    
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,flag=0,count=0;
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        for(int i=0;i<(n/2);i++){
            if(str[i]==str[n-i-1]){
                flag++;
            }
        }
        if(flag==(n/2)){
            printf("0\n");
        }
        else{
            for(int i=0;i<(n/2);i++){
                if(str[i]!=str[n-i-1]){
                    count++;
                }
            }
            printf("%d\n",(count+1)/2);
            }
    }
	return 0;
}
