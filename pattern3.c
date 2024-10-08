#include<stdio.h>

int main() {
    int a, expand = 6, shape;
    scanf("%d %d", &a, &shape);

    for (int i = 0; i < a; i++) {
        // Box Sides Start
        if (i == 0) {
            for (int r1 = 0; r1 < a + expand; r1++) {
                printf("* ");
            }
        }
        else if (i == (a - 1)) {
            for (int rEnd = 0; rEnd < a + expand; rEnd++) {
                printf("* ");
            }
        }
        // Box Sides Stopped
        else {
            printf("* ");

            for (int space = 0; space < ((a + expand) + (a + 1)); space++) {
                if (space%shape==0){
                    printf("*");
                }
                else {

                printf(" ");
                }
            }

            printf(" *");
        }

        printf("\n");
    }

    return 0;
}
