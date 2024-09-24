// Read a line of text using array

#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    // fgets(arr_name, sizeof(arr_name), stdin);
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name);    // another way of displaying string
    return 0;
}
