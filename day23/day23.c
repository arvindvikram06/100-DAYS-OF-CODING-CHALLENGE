#include <stdio.h>

int main(void) {
    int test;
    int orig;
    int num,reversed,remainder;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        scanf("%d",&num);
        orig=num;
        reversed = 0;
        while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }   
      if(orig == reversed){
          printf("wins\n");
      }
      else{
          printf("loses\n");
      }
        
    }
	return 0;
}

