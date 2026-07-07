#include <stdio.h>

struct Item {
    int id;
    char name[30];
    int qty;
    float price;
};

int main() {
    struct Item item[10];
    int n, i;

    printf("Enter number of items: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nItem %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &item[i].id);

        printf("Enter Name: ");
        scanf("%s", item[i].name);

        printf("Enter Quantity: ");
        scanf("%d", &item[i].qty);

        printf("Enter Price: ");
        scanf("%f", &item[i].price);
    }

    printf("\n----- Inventory Details -----\n");

    for(i = 0; i < n; i++) {
        printf("ID: %d\n", item[i].id);
        printf("Name: %s\n", item[i].name);
        printf("Quantity: %d\n", item[i].qty);
        printf("Price: %.2f\n\n", item[i].price);
    }

    return 0;
}