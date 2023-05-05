#include <stdio.h>
int main() {
    int test,no,height;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        scanf("%d",&no);
        scanf("%d",&height);
        int arr[no];
        int count = 0;
        for(int j=0;j<no;j++){
            scanf("%d",&arr[j]);
        }
        for(int k=0;k<no;k++){
            if(arr[k]>height){
                count++;
            }
        }
        printf("%d\n",count);
    }
	return 0;
}
