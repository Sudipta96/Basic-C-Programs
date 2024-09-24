#include<stdio.h>
void main()
{
    int arr[3][4] = {
                       {1,2,3,4},
                       {11,12,13,14},
                       {21,22,23,24},
                    };
    int rows, cols;
    //int rows = sizeof(arr) / sizeof(arr[0]);
    //int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    printf("How many rows: ");
    scanf("%d", &rows);
    printf("How many cols: ");
    scanf("%d", &cols);

    // Print the elements
    printf("=============Displaying 2D Array==============\n\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }



}
