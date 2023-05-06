#include<stdio.h>
#include<string.h>

int main() {
	
	int test;
	scanf("%d",&test);
	while(test--){
	    int size;
	    char str[1000];
	    scanf("%d",&size);
	    scanf("%s",str);
	    int half=(size/2);
	    int count;
	   for(int i=0;i<half;++i){
	       if(str[i]==str[i+half]){
	           count=1;
	       }
	       else 
	       {
	           count=0; break;
	           
	       }
	   }
	    
	    if(count==1){
	      printf("YES\n");  
	    } 
	    else{
	     printf("NO\n"); 
	    } 
	}
	return 0;
}
