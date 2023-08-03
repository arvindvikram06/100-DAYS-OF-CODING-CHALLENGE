#include <stdio.h>

int main(void) {
	int test,max,n;
	scanf("%d",&test);
	for(int i=0;i<test;i++){
	    int arr[2000] = {0};
	    scanf("%d",&n);
	    int plane[2*n];
	    for(int j=0;j<n*2;j++){
	        scanf("%d",&plane[j]);
	    }
	    for(int k=0;k<2*n;k++){
	        arr[plane[k]]++;
	    }
	    max=-1;
	    for(int j=0;j<2000;j++){
	        if(max<arr[j]){
	            max=arr[j];
	        }
	    }
	    printf("%d\n",max);
	 
	}
	return 0;
}
