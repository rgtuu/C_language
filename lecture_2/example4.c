#include <stdio.h>

int main() {
    int sum = 0;
    int num;

    int num1 = 1;
    int num2 = 1;

    for (num = num1 + num2; num <= 1000000; num = num1 + num2) {
        
        if (num % 2 == 0) {
            sum += num;
        }

        num1 = num2;
        num2 = num;
    }
    printf("피보나치 짝수 값의 합: %d", sum);
    
    return 0;
}