//12) WAP to implement delete-Front, any position in between & end in an array. Print 
the array before delete & after delete.
#include <stdio.h>
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void deleteFront(int arr[], int *size) {
    if (*size == 0) {
        printf("Array is empty. Cannot delete front element.\n");
        return;
    }
    for (int i = 0; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;  
}
void deleteAtPosition(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Invalid position. Please provide a valid position.\n");
        return;
    }
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--; 
}
void deleteEnd(int *size) {
    if (*size == 0) {
        printf("Array is empty. Cannot delete end element.\n");
        return;
    }
    (*size)--;  
}
int main() {
    int arr[100], size, position;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array before deletion: ");
    printArray(arr, size);
    deleteFront(arr, &size);
    printf("Array after deleting the front element: ");
    printArray(arr, size);
    printf("Enter the position to delete (0 to %d): ", size - 1);
    scanf("%d", &position);
    deleteAtPosition(arr, &size, position);
    printf("Array after deleting element at position %d: ", position);
    printArray(arr, size);
    deleteEnd(&size);
    printf("Array after deleting the last element: ");
    printArray(arr, size);
    return 0;
}
