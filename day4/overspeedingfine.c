// Problem
// Chef was driving on a highway at a speed of X km/hour.
// To avoid accidents, there are fine imposed on overspeeding as follows:
// No fine if the speed of the car ≤70/hour.Rs 500 fine if the speed of the car is strictly greater than 
// 70 and ≤100Rs 2000 fine if the speed of the car is strictly greater than 100.
// Determine the fine Chef needs to pay.

// Input Format
// The first line of input will contain a single integer 
// T, denoting the number of test cases.
// Each test case consists of a single integer 
// X denoting the speed of Chef's car.
#include <stdio.h>

int main(void) {
	int speed,test;
	scanf("%d",&test);
	for(int i=0;i<test;i++){
	    scanf("%d",&speed);
	    
    if(70<speed&&speed<=100)
    {
	   printf("500\n");
       }
	else if(speed>100)
	{
	   printf("2000\n");
	    
	}
	else{
	     printf("0\n");
	}
   }
	return 0;
  }

