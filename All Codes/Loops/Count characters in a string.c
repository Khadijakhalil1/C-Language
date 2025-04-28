#include <stdio.h>
int main() {
    char str[] = "Hello";
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
        count++;
    printf("Length = %d", count);
    return 0;
}

