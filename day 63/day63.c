#include <stdio.h>

int main(void) {
int n;
scanf("%d",&n);
while(n--)
{
    int a;
    scanf("%d",&a);
    if(a%4==0)
    {
        printf("North\n");
    }else if(a%4==1)
    {
        printf("East\n");
    }else if(a%4==2)
    {
        printf("South\n");
    }else
    {
        printf("West\n");
    }
}    
	return 0;
}


