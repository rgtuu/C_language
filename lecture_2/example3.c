#include <stdio.h>

int main() {
    int sum = 0;
    int num;

    /*
    for (num = 1; num <= 1000; num++) {
        if((num % 3 == 0) && (num % 5 == 0)) {
            sum = sum + num;
        } else if (num % 3 == 0) {
            sum = sum + num;
        } else if (num % 5 == 0) {
            sum = sum + num;
        }
    } 
    */

    for (num = 1; num <= 1000; num++) {
        if((num % 3 == 0) || (num % 5 == 0)) {
            sum = sum + num;
        }
    }

    printf("1000이하의 3과 5의 배수의 합은 %d 입니다.", sum);

    return 0;
}