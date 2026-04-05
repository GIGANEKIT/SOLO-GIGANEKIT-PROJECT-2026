#include <stdio.h>

struct Student {
    char name[50];
    float gpa;
};

void print_student(struct Student s) {
    printf("Name: %-10s | GPA: %.1f\n", s.name, s.gpa);
}

float average_gpa(struct Student arr[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i].gpa;
    }
    return sum / n;
}

int main() {
    struct Student group[5] = {
        {"Egora", 4.5},
        {"Iliaha", 4.8},
        {"Romchick", 3.9},
        {"Katerina", 4.2},
        {"Kotrunov", 5.0}
    };

    printf("--- Group List ---\n");
    for (int i = 0; i < 5; i++) {
        print_student(group[i]);
    }

    float avg = average_gpa(group, 5);
    
    printf("------------------\n");
    printf("Average GPA: %.2f\n", avg);

    return 0;
}