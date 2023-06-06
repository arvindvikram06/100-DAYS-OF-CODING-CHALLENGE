#include <stdio.h>

int main(void) {
int t;
scanf("%d",&t);
for(int i=0;i<t;i++)
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a==0&&b==0&&c==0&&d==0) printf("IN\n");
    else printf("OUT\n");
    
}
}
