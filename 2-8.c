//8) WAP to find maximum & minimum score in the Marks array.
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
