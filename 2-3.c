//3). WAP to find who scored first “99” in an array marks.
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
