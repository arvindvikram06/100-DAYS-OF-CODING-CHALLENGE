#include <stdio.h>

int main(void) {
   int a,b,c;
   
   int test;
   scanf("%d",&test);
   for(int i=0;i<test;i++){
       scanf("%d%d%d",&a,&b,&c);
     
       if(a<b&&a<c){
           printf("ALICE\n");}
           else if(b<c){
               printf("BOB\n");
           }else{
               printf("CHARLIE\n");
           }
       }
       
   

	return 0;
}

