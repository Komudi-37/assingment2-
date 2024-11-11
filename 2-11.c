//11). WAP to implement Insert -Front, any position in between & end in an array. Print 
the array before insert & after insert.
#include <stdio.h>
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insertAtFront(int arr[], int *size, int element) {
    for (int i = *size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = element;
    (*size)++;
}
void insertAtPosition(int arr[], int *size, int element, int position) {
    if (position < 0 || position > *size) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*size)++;
}
void insertAtEnd(int arr[], int *size, int element) {
    arr[*size] = element;
    (*size)++;
}
int main() {
    int arr[100];  // array with a maximum size of 100
    int size, choice, element, position;

    printf("Enter the initial size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array before insertion:\n");
    printArray(arr, size);

    printf("\nChoose an insertion option:\n");
    printf("1. Insert at the front\n");
    printf("2. Insert at a specific position\n");
    printf("3. Insert at the end\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    switch (choice) {
        case 1:
            insertAtFront(arr, &size, element);
            break;
        case 2:
            printf("Enter the position (0 to %d): ", size);
            scanf("%d", &position);
            insertAtPosition(arr, &size, element, position);
            break;
        case 3:
            insertAtEnd(arr, &size, element);
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    printf("Array after insertion:\n");
    printArray(arr, size);
    return 0;
}
