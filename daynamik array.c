#include <stdio.h>
#include <stdlib.h>

int main() {
    int capacity = 2, size = 0;
    int *arr = malloc(capacity * sizeof(int));
    int value;

    while (1) {
        printf("Enter number (-1 to stop): ");
        scanf("%d", &value);

        if (value == -1) break;

        if (size == capacity) {
            capacity *= 2;
            arr = realloc(arr, capacity * sizeof(int));
            printf("Array expanded to %d\n", capacity);
        }

        arr[size++] = value;
    }

    printf("\nStored values:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}