#include <stdio.h>
int main() {
    int num = 17, i = 2, isPrime = 1;
    do {
        if(num % i == 0) {
            isPrime = 0;
            break;
        }
        i++;
    } while(i <= num / 2);

    if(isPrime)
        printf("%d is prime", num);
    else
        printf("%d is not prime", num);

    return 0;
}

