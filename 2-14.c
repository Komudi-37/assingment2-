//14)Given an array of n integers. The task is to print the duplicates in the given array. 
//If there are no duplicates then print -1.
#include <stdio.h>
void printDuplicates(int arr[], int n) {
    int freq[1000] = {0}; 
    int foundDuplicate = 0;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] > 1) {
            printf("%d ", arr[i]);
            freq[arr[i]] = 0;  
            foundDuplicate = 1;
        }
    }
    if (!foundDuplicate) {
        printf("-1\n");
    }
}
int main() {
    int arr[] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printDuplicates(arr, n);
    return 0;
}
