#include <stdio.h>

int main() {
    int r, c, i, j, rowSum, colSum, choice, rowNum, colNum;

    printf("Enter the array's row size: ");
    scanf("%d", &r);
    printf("Enter the array's column size: ");
    scanf("%d", &c);

    int arr[r][c];

    printf("Enter array's elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    do {
        printf("\nEnter 1 to find row sum, 2 to find column sum, or 0 to exit: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                rowSum = 0; 
                printf("Enter row number: ");
                scanf("%d", &rowNum);

                if (rowNum >= 0 && rowNum < r) {
                    printf("Elements of row %d: ", rowNum);
                    for (j = 0; j < c; j++) {
                        printf("%d", arr[rowNum][j]);
                        rowSum += arr[rowNum][j];
                        if (j != c - 1) {
                            printf(", ");
                        }
                    }
                    printf("\nThe sum of row %d: %d\n", rowNum, rowSum);
                } else {
                    printf("Invalid row number!\n");
                }
                break;

            case 2:
                colSum = 0;
                printf("Enter column number: ");
                scanf("%d", &colNum);

                if (colNum >= 0 && colNum < c) {
                    printf("Elements of column %d: ", colNum);
                    for (i = 0; i < r; i++) {
                        printf("%d", arr[i][colNum]);
                        colSum += arr[i][colNum];
                        if (i != r - 1) {
                            printf(", ");
                        }
                    }
                    printf("\nThe sum of column %d: %d\n", colNum, colSum);
                } else {
                    printf("Invalid column number!\n");
                }
                break;

            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 0);

    return 0;
}
