// Initializing a string.

#include<stdio.h>

int main()
{
   //data_type array_name[size] = "string";
   char arr1[50] = "abcde";

   char arr2[] = "abcd";

   char arr3[] = {'a', 'b', 'c', 'd', '\0'};

   char arr4[5] = {'a', 'b', 'c', 'd', '\0'};

   printf("Array - 1: %s", arr1);
   printf("\nArray - 2: %s", arr2);
   printf("\nArray - 3: %s", arr3);
   printf("\nArray - 4: %s", arr4);
}


