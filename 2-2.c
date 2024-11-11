/*2). WAP to print grade of students as per their marks given in an array. (>=75-- A 
grade, 74 to 60--B Grade, 59 to 40--C grade below 40--D grade) .*/
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
