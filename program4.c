#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("Quiz Application\n");

    printf("\n1. Capital of India?\n");
    printf("1.Delhi  2.Mumbai  3.Kolkata  4.Chennai\n");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\n2. C language was developed by?\n");
    printf("1.Bjarne Stroustrup  2.Dennis Ritchie  3.James Gosling  4.Guido van Rossum\n");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\n3. 5 + 7 = ?\n");
    printf("1.10  2.11  3.12  4.13\n");
    scanf("%d", &answer);

    if(answer == 3)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}