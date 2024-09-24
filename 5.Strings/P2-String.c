#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    // The scanf() function reads the sequence of characters until
    //it encounters whitespace (space, newline, tab, etc.).
    printf("Your name is %s.", name);
    return 0;

}


