#include <stdio.h>

int main(void) {
int n;
scanf("%d",&n);
while(n--){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a%b==0){
        printf("%d\n",a/b);
    }
    else{
        printf("%d\n",(a/b)+(a%b));
    }
}
	return 0;
}
