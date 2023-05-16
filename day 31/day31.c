#include <stdio.h>

int main(void) {
	int tests, mushrooms, steps;
    scanf("%d", &tests);

    while (tests--)
    {
        scanf("%d", &mushrooms);
        switch (mushrooms % 3)
        {
            case 0:
                printf("NORMAL\n");
                break;
            case 1:
                printf("HUGE\n");
                break;
            case 2:
                printf("SMALL\n");
                break;
        }
    }
	return 0;
}
