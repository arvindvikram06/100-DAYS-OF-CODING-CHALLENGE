#include <stdio.h>
#include <string.h>
int main(void) {
    int test,l;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        int t1=0,t2=0;
         scanf("%d",&l);
    char bin[l];
    scanf("%s",&bin);
    for(int j=0;j<l;j++){
        if(bin[j]=='1'){
            t1++;
        if(bin[j]=='1'&& bin[j+1]=='1'){
            t2++;
            break;
        }
        }
    }
    if(t1==0){
        printf("0\n");
    }
    else if(t1!=0&&t2!=0){
        printf("2\n");
    }
    else{
        printf("1\n");
    }
    }
	return 0;
}
