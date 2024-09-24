
#include <stdio.h>

int main() {
    float a[2][2], b[2][2], result[2][2];

    // Taking input for both matrices
    printf("Enter elements of 1st matrix\n");
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            scanf("%f", &a[i][j]);

    printf("Enter elements of 2nd matrix\n");
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            scanf("%f", &b[i][j]);

    // Adding corresponding elements of two arrays
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            result[i][j] = a[i][j] + b[i][j];

    // Displaying the sum of matrices
    printf("\nSum Of Matrix:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%.1f ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
