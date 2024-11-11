//10) WAP to count prime numbers in an array.
 #include <stdio.h>
#include <math.h>
int is_prime(int num) {
    if (num <= 1) {
        return 0;  
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;  
        }
    }
    return 1;  
}
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
    int prime_count = 0;
    for (int i = 0; i < n; i++) {
        if (is_prime(arr[i])) {
            prime_count++;  
        }
    }
    printf("\nThe total number of prime numbers in the array is: %d\n", prime_count);
    return 0;
}
