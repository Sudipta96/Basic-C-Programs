// Write a c program to take numbers as input and find out the minimum value from them using array.

#include<stdio.h>
void main()
{
    int num[100], n, i, min;

    printf("How many values: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &num[i]);
    }

    min = num[0];

    for(i=0; i<n; i++)
    {
        if(num[i] < min)
        {
            min = num[i];
        }
    }
    printf("Minimum value: %d", min);

}

