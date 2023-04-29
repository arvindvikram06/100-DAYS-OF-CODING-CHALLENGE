#include <stdio.h>

int main(void) {
    int test,count,n,operation,total;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
      scanf("%d",&n);
      int arr[n];
      for(int j=0;j<n;j++){
          scanf("%d",&arr[j]);
      }
      operation=0;
      for(int i=0;i<n;i++){
          count=0;
          for(int j=0;j<n;j++){
               if(arr[i]==arr[j]){
               count++;
          }
         }
          if(count>operation){
	            operation = count;
	        }
      }
      
      printf("%d\n",n-operation);
    }
	return 0;
}

