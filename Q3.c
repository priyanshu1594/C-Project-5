#include <stdio.h>

int main() {
    int r, c, i, j;

    printf("Enter the array's row & column size: ");
    scanf("%d", &r);
    c = r;

    int arr[r][c], transpose[c][r];

    printf("Enter array's elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            transpose[j][i] = arr[i][j];
        }
    }

    printf("The transpose matrix of an array:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
