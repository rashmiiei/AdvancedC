//left and right array rotation

#include <stdio.h>

// Function to rotate array to the left
void rotateLeft(int arr[], int size) {
    int temp = arr[0];
    for (int i = 0; i < size - 1; i++)
        arr[i] = arr[i + 1];
    arr[size - 1] = temp;
}

// Function to rotate array to the right
void rotateRight(int arr[], int size) {
    int temp = arr[size - 1];
    for (int i = size - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = temp;
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int choice;
    char cont;
    int size = 5;

    do {
        printf("\nCurrent array: ");
        printArray(arr, size);

        printf("\nMenu:\n");
        printf("1. Left Rotate\n");
        printf("2. Right Rotate\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                rotateLeft(arr, size);
                printf("Array after left rotation: ");
                printArray(arr, size);
                break;
            case 2:
                rotateRight(arr, size);
                printf("Array after right rotation: ");
                printArray(arr, size);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

        printf("Do you want to continue rotating? (y/n): ");
        scanf(" %c", &cont); // the space before %c skips any leftover newline

    } while (cont == 'y' || cont == 'Y');

    printf("Thank you! Final array: ");
    printArray(arr, size);

    return 0;
}