#include <stdio.h>

int main(void) {
	int tea,cap,cost;
	int test;
	scanf("%d",&test);
	
	for(int i=0;i<test;i++){
	    scanf("%d%d%d",&tea,&cap,&cost);
	    if(tea>cap){
	        if(tea%cap==0){
	            printf("%d\n",(tea/cap)*cost);}
	        else{
	            printf("%d\n",((tea/cap)+1)*cost);
	        }}
	   else{
	       printf("%d\n",cost);
	   }         
	        
	    }
	
	return 0;
}
