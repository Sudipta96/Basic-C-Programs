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

    printf("Displaying Items : \n");
    printf("%d\n", num[0][0]);
    printf("%d\n", num[0][1]);
    printf("%d\n", num[0][2]);
    printf("%d\n", num[0][3]);

}
