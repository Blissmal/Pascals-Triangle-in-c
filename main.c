#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}


int binomialCoefficient(int n, int r) {
        return factorial(n) / (factorial(r) * factorial(n - r));
}


void generatePascalsTriangle(int n){
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("%d", binomialCoefficient(i, j));
        }
        printf("\n");
    }
}

int main( )
{
    int rows;


    printf("Enter the number of rows for pascals triangle: ");
    scanf("%d", &rows);

    generatePascalsTriangle(rows);
    return 0;
}
/// MADE BY BLISSMAL