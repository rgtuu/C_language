#include <stdio.h>

int main() {
    float a = 3.141592f;
    double b = 3.141592;
    int c = 123;

    printf("a = %.2f \n", a);
    printf("b = %5.2f \n", b);
    printf("c = %5d \n", c);

    return 0;
}

// float변수형은 초기화시 마지막에 f를 붙여 double과 다름을 보여준다.
// float과 double 변수형은 %f로 표현이 가능하다.
// %.2f는 소수점 둘 째자리까지만 나타낸다.
// %5d는 총 다섯자리를 나타내며 만약 5자리보다 작을 시 앞을 띄워서 출력한다.
// %5d에서 변수가 6자리일 시 6자리 전부를 출력한다.
// %5.2f에서는 위 두개를 지켜 소수 둘째자리까지 출력하되, 5자리를 맞춰준다.