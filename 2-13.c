//13). Given an array, the task is to cyclically rotate the array clockwise by one time.
    #include <stdio.h>
void rotateClockwiseByOne(int arr[], int n) {
    int last = arr[n - 1]; 
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array before rotation: ");
    printArray(arr, n);
    rotateClockwiseByOne(arr, n);
    printf("Array after rotation: ");
    printArray(arr, n);
    return 0;
}
