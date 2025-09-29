#include <stdio.h>

int main() {
    double celcius;

    printf("섭씨 온도를 입력해주세요.:");
    scanf("%lf", &celcius);

    printf("화씨 온도는 %lf 입니다.", 9 * celcius / 5 + 32);

    return 0;
}

// scanf에서는 double 변수는 무조건 lf를 사용해야한다.