// C Program to take values from the user and store them in an array
// Print the elements stored in the array

#include<stdio.h>
void main()
{
    int num[100], n, i;
    printf("How many values: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &num[i]);
    }

    printf("\nDisplaying elements......\n");

    for(i=0; i<n; i++)
    {
        printf("Element %d: %d\n", i+1, num[i]);
    }

}

