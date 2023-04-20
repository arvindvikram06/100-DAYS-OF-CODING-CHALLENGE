#include <stdio.h>

int main(void) {
	int amount;
	int test;
	scanf("%d",&test);
	
	for(int i=0;i<test;i++){
	    scanf("%d",&amount);
	    
	    if(amount<=100){
	        printf("%d\n",amount);
	    }
	    else if(100<amount&&amount<=1000){
	        printf("%d\n",amount-25);
	    }
	    else if(1000<amount&&amount<=5000){
	        printf("%d\n",amount-100);}
	    else if(amount>5000){
	        printf("%d\n",amount-500);
	    }
	    }
	        
	    
	
	return 0;
}

