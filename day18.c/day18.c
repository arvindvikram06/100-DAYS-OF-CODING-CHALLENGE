#include<stdio.h>
int main(){
    int a,b,test,sum,rem,count,di;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        scanf("%d %d",&a,&b);
        count=0;
        sum=a+b;
        while(sum!=0){
            rem=sum%10;
        if(rem==3||rem==2||rem==5){
                count=count+5;
            }
        else if(rem==0||rem==6||rem==9){
                count=count+6;
            }
        else if(rem==8){
                count=count+7;
        }
        else if(rem==4){
            count=count+4;
        }
        else if(rem==1){
            count=count+2;
        }
        else{
            count=count+3;
        }
          sum= sum/10;
    }
   
    printf("%d\n",count);
}
return 0;
}

