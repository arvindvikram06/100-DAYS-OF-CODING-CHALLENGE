// Problem
// The ultimate battle has begun in Tekken.
// Each fight has two players. Let the initial health of the players be X and Y, then, after the fight,
// the health of both the players reduces by min(X, Y). Anna, Bob, and Claudio have initial health levels of A,B, and 
// C respectively. Each pair of players fight exactly once.
// Considering that you can schedule the fight between each pair in any order, find whether Anna can have a positive health level at the end of the battle.

#include <stdio.h>
int main(void) {
    int anna,bob,claudio,testcase;
    scanf("%d",&testcase);
    int match_1,match_2;
    for(int i=0;i<testcase;i++){
        scanf("%d",&anna);
        scanf("%d",&bob);
        scanf("%d",&claudio);
        if(bob>claudio){
        match_1=bob-claudio;
        }else{
         match_1=claudio-bob;
        }
        match_2=anna-match_1;
        if(match_2>0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    	return 0;
}

