// Calculate the size of the array

#include<stdio.h>
#include<string.h>
int main()
{
    char name[30] = "This is a string";
    int length;
    length = strlen(name);
    puts(name);    // another way of displaying string
    printf("Length of the string: %d\n", length);
    return 0;
}
