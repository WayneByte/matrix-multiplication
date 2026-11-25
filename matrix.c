
#include <stdio.h>

#define ROW 2
#define MID 4
#define COL 5

int main(void)
{
    int A[ROW][MID];
    int B[MID][COL];
    int C[ROW][COL] = {0};
    int i, j, k;

    printf("Input matrix A (2x4):\n");

    for (i = 0; i < ROW; i++) {
        for (j = 0; j < MID; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Input matrix B (4x5):\n");

    for (i = 0; i < MID; i++) {
        for (j = 0; j < COL; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            for (k = 0; k < MID; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatrix C:\n");

    for (i = 0; i < ROW; i++) {
        printf("row%d ->. ", i + 1);

        for (j = 0; j < COL; j++) {
            printf("%d", C[i][j]);

            if (j < COL - 1) {
                printf(", ");
            }
        }

        printf("\n");
    }

    return 0;
}
