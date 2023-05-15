#include <stdio.h>

int main(void) {
    int test;
	scanf("%d",&test);
	for(int i=0;i<test;i++){
	    int a,b;
	    scanf("%d%d",&a,&b);
	   if((a>0)&&(b>0)){
	       printf("Solution\n");
	   }else if(a==0){
	       printf("liquid\n");
	   }else if(b==0){
	       printf("solid\n");
	   } 
	    
	}
	return 0;
}

