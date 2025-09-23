#include <stdio.h>

int main() {
    int arr[100];
    int size, i, temp;

    // 1. Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // 2. Input the array elements
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the original array
    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 3. Reverse the array using the two-pointer technique
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements at start and end
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move pointers towards the center
        start++;
        end--;
    }

    // 4. Print the reversed array
    printf("Reversed array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}