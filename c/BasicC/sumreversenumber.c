#include <stdio.h>
#include <stdlib.h>

int reverse(int n) {
    int r = 0;
    while (n > 0) {
        r = r * 10 + n % 10;
        n = n / 10;
    }
    return r;
}

int main() {
    int number, reverse_number, sum_of_numbers;
    printf("Enter a number: ");
    scanf("%d", &number);
    reverse_number = reverse(number);
    sum_of_numbers = number + reverse_number;
    printf("The sum of %d and its reverse %d is %d", number, reverse_number, sum_of_numbers);
    return 0;
}
