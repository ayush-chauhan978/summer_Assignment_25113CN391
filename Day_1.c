// Question number 1 
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}

// Question number 2 
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
// Question number 3
#include <stdio.h>

int main() {
    int n;
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);

    return 0;
}

// Question number 4
#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0) {
        n = n / 10;
        count++;
    }

    printf("Number of digits = %d", count);

    return 0;
}