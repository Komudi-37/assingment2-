//5) WAP to find sum of all scores in Marks array.
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
