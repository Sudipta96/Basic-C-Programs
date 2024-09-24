// 2D Array

#include<stdio.h>
void main()
{
    // Rule : data_type array_name[row_size][column_size]
    // Total items = row_size X column_size = 3 x 4 = 12
    int num[3][4] = {
                       {1,2,3,4},
                       {11,12,13,14},
                       {21,22,23,24},
                    };
    printf("Displaying 2D Array Items: \n\n");
    printf("%d\t", num[0][0]);
    printf("%d\t", num[0][1]);
    printf("%d\t", num[0][2]);
    printf("%d\t", num[0][3]);
    printf("\n");
    printf("%d\t", num[1][0]);
    printf("%d\t", num[1][1]);
    printf("%d\t", num[1][2]);
    printf("%d\t", num[1][3]);
    printf("\n");
    printf("%d\t", num[2][0]);
    printf("%d\t", num[2][1]);
    printf("%d\t", num[2][2]);
    printf("%d\t", num[2][3]);

}
