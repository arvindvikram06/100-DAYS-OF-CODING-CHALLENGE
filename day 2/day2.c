//Problem
//Words that contain many consecutive consonants, like "schtschurowskia", are generally considered somewhat hard to pronounce.

//We say that a word is hard to pronounce if it contains4 or more consonants in a row; otherwise it is easy to pronounce. For example, "apple" and "polish" are easy to pronounce, but "schtschurowskia" is hard to pronounce.

//You are given a string S consisting of N lowercase Latin characters. Determine whether it is easy to pronounce or not based on the rule above — print YES if it is easy to pronounce and NO otherwise.

//For the purposes of this problem, the vowels are the characters 

//{a,e,i,o,u} and the consonants are the other 
//21 characters.

//input
//The first line of input will contain a single integer T, denoting the number of test cases.Each test case consists of two lines of inputThe first line of each test case contains a single integer 
//N, the length of string S.The second line of each test case contains the string S.

//input                                       
//5                      
//5
//apple
//15
//schtschurowskia
//6
//polish
//5
//tryst
//3
//cry
//output
//YES
//NO
//YES
//NO
//YES

#include <stdio.h>
#include<string.h>

int main(void) {
	 int testcase;
	 char word[100];
	 int length;
	 int count=0;
	 scanf("%d",&testcase);
	 for(int i=0;i<testcase;i++){
	 scanf("%d",&length);
	 scanf("%s",word);
	 int sum=0;
	 int max_count=0;
	 
	  for(int j=0;j<length;j++){
	     if(word[j]=='a'||word[j]=='e'||word[j]=='i'||word[j]=='o'||word[j]=='u'){
	         
	         sum=0;
	     }else{
	         
	         sum++;
	     }
	       if(sum==4){
	          max_count=4;
	       }  
	     }
	     if(max_count>=4){
	     printf("NO\n");
	    }else{
	     printf("YES\n");
	 }
	}
	
	return 0;
}
