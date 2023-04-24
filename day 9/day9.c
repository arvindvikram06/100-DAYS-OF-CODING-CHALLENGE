#include <stdio.h>

int main(void) {
    int test,no;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        scanf("%d",&no);
        int arr[no];
        int count = 0;
      for(int j=0;j<no;j++){
          scanf("%d",&arr[j]);
      }
      for(int k=0;k<no;k++){
          if(arr[k]>=1000){
              count++;
          }
      }printf("%d\n",count);
      
    }
	return 0;
}
