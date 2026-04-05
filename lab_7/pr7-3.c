#include <stdio.h>
#include <stdlib.h> // Обязательно для malloc и free

struct Student {
    char name[50];
    float gpa;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student* students = malloc(n * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter GPA for student %d: ", i + 1);
        scanf("%f", &students[i].gpa);
    }

    printf("\n--- Result List ---\n");
    float sum = 0;
    for (int i = 0; i < n; i++) {
        printf("%d. %s - %.1f\n", i + 1, students[i].name, students[i].gpa);
        sum += students[i].gpa;
    }

    if (n > 0) {
        printf("-------------------\n");
        printf("Total Average GPA: %.2f\n", sum / n);
    }

    free(students);
    printf("\nMemory freed. Program finished.\n");

    return 0;
}