// Question 5
#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0) {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
// Question 6
#include <stdio.h>

int main() {
    int num, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    printf("Reversed number = %d", reverse);

    return 0;
}
// Question 7
#include <stdio.h>

int main() {
    int num, digit, product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0) {
        digit = num % 10;
        product = product * digit;
        num = num / 10;
    }

    printf("Product of digits = %d", product);

    return 0;
}
// question 8
#include <stdio.h>

int main() {
    int num, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num > 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if(original == reverse)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}
