#include <stdio.h>

int main() {
    int arr[100], n, i, key, found = 0;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input value to search
    printf("Enter the value to search: ");
    scanf("%d", &key);

    // Linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Value found at position %d (index %d)\n", i + 1, i);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Value not found in the array.\n");
    }

    return 0;
}

