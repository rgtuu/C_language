#include <stdio.h>

int main() {
    int height, weight;


    printf("키와 몸무게를 입력해주세요 :");
    scanf("%d %d", &height, &weight);

    if ((height >= 180) && (weight >= 100)) {
        printf("당신은 거구입니다.");
    } else if ((height >= 180) && (weight <= 100)) {
        printf("당신은 멸치입니다.");
    } else if (weight >= 100) {
        printf("당신은 돼지입니다.");
    } else {
        printf("당신은 정상인입니다.");
    }
    

    return 0;
}