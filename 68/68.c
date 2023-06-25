#include<stdio.h>
int main(){
    int test,size;
    scanf("%d",&test);
    for(int i =0;i<test;i++){
        scanf("%d",&size);
        int arr[10001] = {0};
        for(int j = 0; j<size;j++){
            int in =0;
            int sc =0;
            scanf("%d",&in);
            scanf("%d",&sc);
            if(in<=8){
            if(arr[in]<sc){
                arr[in] = sc;
            }
            if(in>8){
                arr[in] = 0;
            }
        }}
        int sum =0;
        for(int i =0; i<10001;i++){
            sum = sum + arr[i];
        }
        
        printf("%d\n",sum);
        
    }
}
