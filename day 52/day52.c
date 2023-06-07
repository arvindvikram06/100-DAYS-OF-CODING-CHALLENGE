#include <stdio.h>
#include<string.h>

int main(void) {
	int test,size;
	scanf("%d",&test);
	for(int i=0;i<test;i++){
	    scanf("%d",&size);
	    char a[size+1];
	    char b[size+1];
	    scanf("%s",a);
	    scanf("%s",b);
	    int one=0,zero=0,one2=0,zero2=0;
	    
	    
	    for(int j=0;j<size;j++){
	        if(a[j]=='1'){
	            one++;
	        }
	        else if(a[j]=='0'){
	            zero++;
	        }
	    }
	    for(int k=0;k<size;k++){
	        if(b[k]=='1'){
	            one2++;
	        }
	        else if(b[k]=='0'){
	            zero2++;
	        }
	    }
	    if((one == one2) && (zero == zero2)){
	        printf("YES\n");
	        
	    }else{
	        printf("NO\n");
	    }
	    
	}
	return 0;
}
