#include <stdio.h>

int main() {
    int arr[100];
    int size, i;
    int even_count = 0;
    int odd_count = 0;

    // 1. Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // 2. Input array elements
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Loop through the array to count even and odd numbers
    for (i = 0; i < size; i++) {
        // Check if the number is even
        if (arr[i] % 2 == 0) {
            even_count++;
        } else { // Otherwise, it's odd
            odd_count++;
        }
    }

    // 4. Print the final counts
    printf("Even=%d, Odd=%d\n", even_count, odd_count);

    return 0;
}