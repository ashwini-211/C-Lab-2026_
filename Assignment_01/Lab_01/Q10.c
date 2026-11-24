#include <stdio.h>

int main()
{
    float M, P, C, E, CM;

    printf("Enter Mathematics marks: ");
    scanf("%f", &M);

    printf("Enter Physics marks: ");
    scanf("%f", &P);

    printf("Enter Chemistry marks: ");
    scanf("%f", &C);

    printf("Enter Entrance exam marks: ");
    scanf("%f", &E);

    CM = M/2 + P/2 + C/2 + E;

    printf("Cut-off mark = %.2f", CM);

    return 0;
}

