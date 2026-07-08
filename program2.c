#include <stdio.h>

int main() {
    int n, i;
    char book[50][50];
    char author[50][50];

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book Name: ");
        scanf("%s", book[i]);

        printf("Enter Author Name: ");
        scanf("%s", author[i]);
    }

    printf("\n----- Library Records -----\n");
    for(i = 0; i < n; i++) {
        printf("Book: %s\tAuthor: %s\n", book[i], author[i]);
    }

    return 0;
}