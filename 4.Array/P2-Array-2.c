# write a C program to calculate sum and average of numbers in an array.

#include<stdio.h>
void main()
{
    int num[5], n, i;
    float sum, average;
    printf("How many values: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &num[i]);
        sum = sum + num[i];
    }

    average = sum / n;
    printf("Average: %f", average);

}

