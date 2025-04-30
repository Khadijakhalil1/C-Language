#include <stdio.h>
int main() {
    int a = 0, b = 1, next, count = 0;
    do {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
        count++;
    } while(count < 10);
    return 0;
}

