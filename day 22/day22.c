#include <stdio.h>
#include<string.h>
int main(void) {
    int test;
    char arr[5];
    char arr1[5];
    scanf("%d",&test);
for(int i=0;i<test;i++){
    scanf("%s",arr);
    scanf("%s",arr1);
  
  for(int j=0;j<5;j++){
      if(arr[j]==arr1[j]){
          printf("G");
      }else{
          printf("B");
      }
  }
     printf("\n");
}
	return 0;
}

