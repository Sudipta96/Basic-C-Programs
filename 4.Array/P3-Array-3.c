// Write a c program to take numbers as input and find out the maximum value from them using array.

#include<stdio.h>
void main()
{
    int num[100], n, i, max;

    printf("How many values: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &num[i]);
    }
    max = num[0];

    for(i=0; i<n; i++)
    {
        if(num[i] > max)
        {
            max = num[i];
        }
    }
    printf("Maximum value: %d", max);

}
