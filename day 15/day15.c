#include <stdio.h>

int main(void) {
    int a,b,c,test;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        scanf("%d%d%d",&a,&b,&c);
        if(a<b&&a<c){
            printf("draw\n");
        }
        else if(b<c){
            printf("bob\n");
        }
        else{
            printf("alice\n");
        }
    }
	return 0;
}

