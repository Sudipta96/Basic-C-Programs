
#include<stdio.h>
void main()
{
    int num[2][2];   // data_type array_name[row_size][column_size]
                     // total items = row_size X column_size = 2 x 2 = 4


    printf("==============Enter elements============\n\n");
    printf("Element[0][0] : ");
    scanf("%d", &num[0][0]);
    printf("Element[0][1] : ");
    scanf("%d", &num[0][1]);
    printf("Element[1][0] : ");
    scanf("%d", &num[1][0]);
    printf("Element[1][1] : ");
    scanf("%d", &num[1][1]);

    printf("===========Displaying Items=============\n\n");
    printf("%d\t", num[0][0]);
    printf("%d\t", num[0][1]);
    printf("\n");
    printf("%d\t", num[1][0]);
    printf("%d\t", num[1][1]);


}
