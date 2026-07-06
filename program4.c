#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c[3];
    int i;

    printf("Enter Contact Details:\n");

    for(i=0;i<3;i++) {
        printf("\nName: ");
        scanf("%s", c[i].name);

        printf("Phone: ");
        scanf("%s", c[i].phone);
    }

    printf("\nContact List:\n");

    for(i=0;i<3;i++) {
        printf("Name: %s\tPhone: %s\n", c[i].name, c[i].phone);
    }

    return 0;
}