#include <stdio.h>

struct student {
    char name[50];
    int roll;
    int marks;
};

void display(struct student s[], int n) {
    int i;

    printf("\nStudents scoring above 500:\n");

    for (i = 0; i < n; i++) {
        if (s[i].marks > 500) {
            printf("\nName: %s", s[i].name);
            printf("\nRoll No: %d", s[i].roll);
            printf("\nMarks: %d\n", s[i].marks);
        }
    }
}

int main() {
    struct student s[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("\nEnter name, roll number and marks of student %d:\n", i + 1);
        scanf(" %49[^\n]", s[i].name);
        scanf("%d %d", &s[i].roll, &s[i].marks);
    }

    display(s, 10);

    return 0;
}
