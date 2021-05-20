#include <stdio.h>
#include <stdlib.h>
void printMatrix(int N, int M, int x[][20]) {
    for (int i = N-1; i >= 0; i--) {
            printf("\n");
        for (int j = 0; j <= M-1; j++) {
                printf("%d ", x[i][j]);
        }
    }
}
int main()
{
    int N, M, x[20][20] = {0};
    printf("N:");
    scanf("%d", &N);
    printf("M:");
    scanf("%d", &M);
    //x[0][0] = 0;
    for (int i = 0; i <= N-1; i++) //first column is 1
    x[i][0] = 1;
    for (int j = 1; j <= M-1; j++) //first row is 1
    x[0][j] = 1;
    //printMatrix(N, M, x);
   for (int i = 1; i <= N-1; i++)
        for (int j = 1; j <= M-1; j++)
            x[i][j] = x[i-1][j] + x[j-1][i] + x[i-1][j-1]; //add the north, the east, and the north-east way together
    printf("\n");
    //printMatrix(N, M, x);
    printf("Solution:%d", x[N-1][M-1]);
    return 0;
}
