#include <stdio.h>

void display(int roll[], char name[][50], float marks[], int n) {
    int i;
    printf("\n----- Student Records -----\n");
    for(i = 0; i < n; i++) {
        printf("Roll: %d\tName: %s\tMarks: %.2f\n",
               roll[i], name[i], marks[i]);
    }
}

int main() {
    int n, i;
    int roll[50];
    char name[50][50];
    float marks[50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }

    display(roll, name, marks, n);

    return 0;
}