#include <stdio.h>

int main() {
    int N;
    printf("줄의 개수를 입력하시오:");

    scanf("%d", &N);

    for (int i = N; i > 0; i--) {

        for (int k = N; k > i; k--) {
            printf(" ");
        }

        for (int j = 0; j < (2 * i - 1); j++) {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}