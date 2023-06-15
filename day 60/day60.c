#include <stdio.h>

int main(void) {
     int t;
     scanf("%d",&t);
     while(t--)
     {
         int p,mine,gex;
         scanf("%d %d %d ",&p,&mine,&gex);
         if((p+1)*gex>=mine)
         {
             printf("Yes\n");
         }
         else
         {
             printf("No\n");
         }
     }
	return 0;
}
