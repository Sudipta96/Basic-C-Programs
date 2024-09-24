
#include<stdio.h>
void main()
{
    int num[2][2];   // data_type array_name[row_size][column_size]
                     // total items = row_size X column_size = 2 x 2 = 4

    // Initialize with items:
    int marks[2][3] = {{1, 3, 0}, {-1, 5, 9}};


    printf("Enter elements........\n");
    scanf("%d", &num[0][0]);
    scanf("%d", &num[0][1]);

    scanf("%d", &num[1][0]);
    scanf("%d", &num[1][1]);

    printf("Displaying Items : \n");
    printf("%d\n", num[0][0]);
    printf("%d\n", num[0][1]);
    printf("%d\n", num[1][0]);
    printf("%d\n", num[1][1]);



}
