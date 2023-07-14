#include <stdio.h>

int main(void) 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[101];
        scanf("%s",str);
        int i=0,c1=0,c2=0;
        while(str[i]!='\0')
        {
            if(str[i]=='1')
            {
                c1++;
            }
            else
            c2++;
            i++;
        }
        if(c1>c2 && c1>=11)
        {
            printf("WIN\n");
        }
        else if(c1==10 && c2==10)
        {
            printf("LOSE\n");
        }
        else
        printf("LOSE\n");
    }
    
	return 0;
}
