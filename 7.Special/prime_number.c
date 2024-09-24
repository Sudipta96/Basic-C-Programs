#include <stdio.h>

void main() {
    int i, prime, num;

    printf("Enter a number: ");
    scanf("%d", &num);

    prime = 1;
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            prime = 0;
            break;
            }
    }
    if (prime==1)
      {
       printf("prime number");
       }
    else
    {
       printf("not a prime number");
    }

}



