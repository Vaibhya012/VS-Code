#include <stdio.h>
int main(){
    int num, digit, sum, temp;

    for(num = 1; num <=500; num++) {
        sum = 0;
        temp = num;

        while(temp != 0) {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        if(num == sum) {
            printf("%d\n", num);
        }
    }

    return 0;
}
