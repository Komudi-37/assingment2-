//9)WAP to find a peak element which is not smaller than its neighbors.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n]; 
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    if (n == 1) {
        printf("The peak element is: %d\n", arr[0]);
    } else {
        if (arr[0] >= arr[1]) {
            printf("The peak element is: %d\n", arr[0]);
        }
        else if (arr[n - 1] >= arr[n - 2]) {
            printf("The peak element is: %d\n", arr[n - 1]);
        }
        else {
            for (int i = 1; i < n - 1; i++) {
                if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
                    printf("The peak element is: %d\n", arr[i]);
                    break;
                }
            }
        }
    }
    return 0;
}
