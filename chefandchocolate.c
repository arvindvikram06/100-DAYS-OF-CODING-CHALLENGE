// Problem
// Chef has X 5 rupee coins and Y 10 rupee coins. 
// Chef goes to a shop to buy chocolates for Chefina where each chocolate costs 
// Z rupees. Find the maximum number of chocolates that Chef can buy for Chefina.
// Input Format
// The first line contains a single integer 
// T — the number of test cases. Then the test cases follow.
// The first and only line of each test case contains three integers X, Y and 
// Z — the number of 5 rupee coins, the number of 10 rupee coins and the cost of each chocolate.

#include <stdio.h>

int main(void) {
    
         
         int a,b,c;
         int test,total;
         int five,ten;
    
         
         scanf("%d",&test);
         for(int i=0;i<test;i++){
              scanf("%d",&a);
              scanf("%d",&b);
              scanf("%d",&c);
              five=5*a;
              ten=10*b;
              total=(five+ten)/c;
              printf("%d\n",total);
              
         }
	return 0;
}

