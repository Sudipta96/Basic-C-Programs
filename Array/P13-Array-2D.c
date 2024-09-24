#include<stdio.h>
void main()
{

    int rows, cols, i, j, min;

    printf("How many rows: ");
    scanf("%d", &rows);
    printf("How many cols: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    // Print the elements
    printf("\n=============Input 2D Array==============\n\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            printf("Enter row %d - col %d : ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    min = arr[0][0];

    // Print the elements
    printf("=============Displaying 2D Array==============\n\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            printf("%d\t", arr[i][j]);
            min = (arr[i][j] < min) ? arr[i][j] : min;
        }
        printf("\n");
    }

    printf("Minimum value: %d", min);

}



