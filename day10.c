#include <stdio.h>


int main() {
	int a,b,c,d;
	int test;
	scanf("%d",&test);
	for(int i=0;i<test;i++){
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    if((a+b)>=d||(b+c)>=d||a+c>=d)
      printf("YES\n");
      else
      printf("NO\n");
	}
	return 0;
}

