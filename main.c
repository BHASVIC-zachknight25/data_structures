#include <stdio.h>

int main(void) {
    int myNumbers[20];
    int x;
    char again = 'y';
    do {
        printf("Enter where you want the number to be stored(0-19) ");
        scanf("%d", &x);
        if (x < 0 || x > 19) {
            printf("Number out of range \n");
        }
        myNumbers[x]= printf("Enter what number you want to store: ");
        scanf("%d", &myNumbers[x]);
        printf("%d\n", myNumbers[x]);
        printf("Go again? (y/n) \n");
        scanf(" %c", &again);
    }while (again == 'y');
    return 0;
}
