#include <stdio.h>

int main() {
    int N;
    printf("줄의 개수 입력:");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = i; j < N; j++) {
            printf(" ");
        }
        for (int k = (2 * i - 1); k > 0 ; k-- ) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}