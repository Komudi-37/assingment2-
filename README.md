# assingment2-
1) WAP to increase every student mark by 5 & then print the updated array.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n]; 
    printf("Enter the marks of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < n; i++) {
        marks[i] += 5;
    }
    printf("\nUpdated marks (increased by 5):\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}
2). WAP to print grade of students as per their marks given in an array. (>=75-- A 
grade, 74 to 60--B Grade, 59 to 40--C grade below 40--D grade) .
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n]; 
    printf("Enter the marks of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    printf("\nGrades of students:\n");
    for (int i = 0; i < n; i++) {
        char grade;
        if (marks[i] >= 75) {
            grade = 'A';
        } else if (marks[i] >= 60) {
            grade = 'B';
        } else if (marks[i] >= 40) {
            grade = 'C';
        } else {
            grade = 'D';
        }
        printf("Student %d (Marks: %d) - Grade: %c\n", i + 1, marks[i], grade);
    }

    return 0;
}
3). WAP to find who scored first “99” in an array marks.
   #include <stdio.h>
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n];  
    printf("Enter the marks of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    int found = 0;  
    for (int i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("Student %d is the first to score 99!\n", i + 1); 
            found = 1; 
            break; 
        }
    }
    if (!found) {
        printf("No student scored 99.\n");
    }

    return 0;
}
4)WAP to find Who & how many students have scored 99 in an array Marks.
    #include <stdio.h>
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n]; 
    printf("Enter the marks of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    int count = 0;  
    printf("\nStudents who scored 99:\n");
    for (int i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("Student %d scored 99\n", i + 1); 
            count++; 
        }
    }
    if (count > 0) {
        printf("\nTotal number of students who scored 99: %d\n", count);
    } else {
        printf("\nNo students scored 99.\n");
    }
    return 0;
}
5) WAP to find sum of all scores in Marks array.
   #include <stdio.h>
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n]; 
    int sum = 0;  
    printf("Enter the marks of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < n; i++) {
        sum += marks[i];  
    }
    printf("\nThe sum of all scores is: %d\n", sum);
    return 0;
}
6) . WAP to find average score of the Marks array.
   #include <stdio.h>
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n];  
    int sum = 0;  
    printf("Enter the marks of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < n; i++) {
        sum += marks[i];  
    }
    float average = (float)sum / n; 
    printf("\nThe average score of the students is: %.2f\n", average);
    return 0;
}
7). WAP to check whether score is even or odd in an array.
   #include <stdio.h>
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n];  
    printf("Enter the marks of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < n; i++) {
        if (marks[i] % 2 == 0) {
            printf("Student %d's score %d is Even.\n", i + 1, marks[i]);
        } else {
            printf("Student %d's score %d is Odd.\n", i + 1, marks[i]);
        }
    }
    return 0;
}
8) WAP to find maximum & minimum score in the Marks array.
   #include <stdio.h>
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n]; 
    printf("Enter the marks of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    int max = marks[0];
    int min = marks[0];
    for (int i = 1; i < n; i++) {
        if (marks[i] > max) {
            max = marks[i]; 
        }
        if (marks[i] < min) {
            min = marks[i];  
        }
    }
    printf("\nThe highest score is: %d\n", max);
    printf("The lowest score is: %d\n", min);
    return 0;
}
9)WAP to find a peak element which is not smaller than its neighbors.
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
10) WAP to count prime numbers in an array.
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
11). WAP to implement Insert -Front, any position in between & end in an array. Print 
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
12) WAP to implement delete-Front, any position in between & end in an array. Print 
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
13). Given an array, the task is to cyclically rotate the array clockwise by one time.
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
14)Given an array of n integers. The task is to print the duplicates in the given array. 
If there are no duplicates then print -1.
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
