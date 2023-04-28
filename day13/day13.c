#include <stdio.h>
int main(){
    int test,from,to,count;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        scanf("%d%d",&from,&to);
        count=0;
        for(int j=from;j<=to;j++){
        if((j%10==2)||(j%10==3)||(j%10==9)){
            count++;
        }
        } printf("%d\n",count);
    }
   
    return 0;
}
