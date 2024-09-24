#include<stdio.h>
void main()
{
    int arr[3][4];
    int rows, cols, i, j;

    printf("How many rows: ");
    scanf("%d", &rows);
    printf("How many cols: ");
    scanf("%d", &cols);

    // Print the elements
    printf("=============Input 2D Array==============\n\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            printf("Enter row %d - col %d : ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    // Print the elements
    printf("=============Displaying 2D Array==============\n\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }



}
