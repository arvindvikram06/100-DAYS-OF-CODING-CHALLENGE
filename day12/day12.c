#include <stdio.h>
#include <string.h>

int main(void) {
	
	int test;
	scanf("%d", &test);
	for(int i=0;i<test;i++) {
	    int strno;
	    int count = 0;
	    int flag = 0;
	    scanf("%d", &strno);
	    char arr[100];
	    for(int j=0;j<strno;j++) {
	        scanf("%s", arr);
	        int com;
	        com = strcmp("START38", arr);
	        if (com == 0)
	        count++;
	        else
	        flag++;

	    }
	     printf("%d %d\n", count,flag);
	    
	}
	return 0;
}

