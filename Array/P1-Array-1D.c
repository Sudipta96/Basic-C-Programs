// Introduction of 1D Array

#include<stdio.h>
void main()
{
   //Intialize an array: dataType arrayName[arraySize];
   int hm_marks[5];

   //Intialize an array with items:
   int sc_marks[5] = {19, 10, 8, 17, 9};

   //Intialize an array with items(without referring size)
   int bs_marks[] = {19, 10, 8, 17, 9};

   // Printing array items:
   // Rule: printf("format_specifier", arr_name[index]);
   printf("------------Displaying science marks------------\n\n");
   printf("%d\t", sc_marks[0]);
   printf("%d\t", sc_marks[1]);
   printf("%d\t", sc_marks[2]);
   printf("%d\t", sc_marks[3]);
   printf("%d\t", sc_marks[4]);

   // Take array element as input:
   // Rule: scanf("format_specifier", &arr_name[index]);
   printf("\n\n------------Takeing input for hm marks------------\n");
   printf("\nHm marks element 1: ");
   scanf("%d", &hm_marks[0]);
   printf("Hm marks element 2: ");
   scanf("%d", &hm_marks[1]);
   printf("Hm marks element 3: ");
   scanf("%d", &hm_marks[2]);
   printf("Hm marks element 4: ");
   scanf("%d", &hm_marks[3]);
   printf("Hm marks element 5: ");
   scanf("%d", &hm_marks[4]);

   printf("\n\n------------Displaying items of hm marks------------\n");
   printf("%d\t", hm_marks[0]);
   printf("%d\t", hm_marks[1]);
   printf("%d\t", hm_marks[2]);
   printf("%d\t", hm_marks[3]);
   printf("%d\t", hm_marks[4]);

   printf("\n\n------------Displaying array items of bs marks before updating------------\n");
   printf("%d\t", bs_marks[0]);
   printf("%d\t", bs_marks[1]);
   printf("%d\t", bs_marks[2]);
   printf("%d\t", bs_marks[3]);
   printf("%d\t", bs_marks[4]);

   // Changing array element item value:
   // Rule: arr_name[index] = new_value;

   // make the value of the third element to -1
   bs_marks[2] = 33;

   // make the value of the fifth element to 0
   bs_marks[4] = 40;

   printf("\n\n------------Displaying array items of bs marks after updating------------\n");
   printf("%d\t", bs_marks[0]);
   printf("%d\t", bs_marks[1]);
   printf("%d\t", bs_marks[2]);
   printf("%d\t", bs_marks[3]);
   printf("%d\t", bs_marks[4]);


}
