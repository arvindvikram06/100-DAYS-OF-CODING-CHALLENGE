#include <stdio.h>

int main(void) {
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++) {
        char input;
        scanf(" %c", &input);
        if (input == 'B' || input == 'b') {
            printf("BattleShip\n");
        } else if (input == 'C' || input == 'c') {
            printf("Cruiser\n");
        } else if (input == 'D' || input == 'd') {
            printf("Destroyer\n");
        } else if (input == 'F' || input == 'f') {
            printf("Frigate\n");
        }
    }
    return 0;
}
