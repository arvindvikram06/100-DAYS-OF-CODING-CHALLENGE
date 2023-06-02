#include <stdio.h>

int main(void) {
	int test;
	scanf("%d",&test);
	for(int i=0;i<test;i++){
	    int no;
	    scanf("%d",&no);
	    int arr[no];
	     int odd=0;
	    for(int i=0;i<no;i++)
	    {
	        scanf("%d",&arr[i]);
	        odd=odd^arr[i];
	    }
	    printf("%d\n",odd);
	}
	return 0;
}
	    
