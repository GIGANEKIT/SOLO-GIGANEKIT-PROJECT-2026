#include <stdio.h>

struct Student {
    char name[50];
    float gpa;
};

int main() {
    struct Student group[5];

    struct Student s0 = {"Egora", 4.5};
    struct Student s1 = {"Iliaha", 4.8};
    struct Student s2 = {"Romchick", 3.9};
    struct Student s3 = {"Katerina", 4.2};
    struct Student s4 = {"Kotrunov", 5.0}; 

    group[0] = s0;
    group[1] = s1;
    group[2] = s2;
    group[3] = s3;
    group[4] = s4;

    printf("Spisok studentov:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student: %s, GPA: %.1f\n", group[i].name, group[i].gpa);
    }

    return 0;
}