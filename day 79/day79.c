#include <stdio.h>

int main() {
	int x,y,z,i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d %d %d",&x,&y,&z);
	    if((x*y)%z==0){
	        printf("%d %d\n",x*y,z);
	    }
	   else if((y*z)%x==0){
	        printf("%d %d\n",y*z,x); 
	}
	else if((x*z)%y==0){
	        printf("%d %d\n",x*z,y);
	}
	else{
	    printf("-1\n");
	}
	}
	return 0;
}
