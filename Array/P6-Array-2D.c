#include<stdio.h>
void main()
{
    int num[3][4];   // data_type array_name[row_size][column_size]
                     // total items = row_size X column_size = 3 x 4 = 12
    num[0][0] = 1;
    num[0][1] = 2;
    num[0][2] = 3;
    num[0][3] = 4;

    num[1][0] = 5;
    num[1][1] = 6;
    num[1][2] = 7;
    num[1][3] = 8;

    num[2][0] = 9;
    num[2][1] = 10;
    num[2][2] = 11;
    num[2][3] = 12;

    printf("Displaying Items : \n\n");
    // 1st Row
    printf("%d\t", num[0][0]);  // 1R - 1C
    printf("%d\t", num[0][1]);  // 1R - 2C
    printf("%d\t", num[0][2]);  // 1R - 3C
    printf("%d\t", num[0][3]);  // 1R - 4C
    printf("\n");
    // 2nd Row
    printf("%d\t", num[1][0]);  // 2R - 1C
    printf("%d\t", num[1][1]);  // 2R - 2C
    printf("%d\t", num[1][2]);  // 2R - 3C
    printf("%d\t", num[1][3]);  // 2R - 4C
    printf("\n");

    // 3rd Row
    printf("%d\t", num[2][0]);  // 3R - 1C
    printf("%d\t", num[2][1]);  // 3R - 2C
    printf("%d\t", num[2][2]);  // 3R - 3C
    printf("%d\t", num[2][3]);  // 3R - 4C

}
