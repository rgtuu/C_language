#include <stdio.h>

int main() {
    int a = 0xAB;
    int b = 10;
    int c = 3;

    int d = 10;
    double e = 3;

    printf("b / c = %d\n", b / c);
    printf("d / e = %f\n", d / e);

    printf("~a = %x\n", ~a);
    printf("a>>2 = %x\n", a >> 2);
    printf("a<<2 = %x\n", a << 2);

    return 0;

}

// 정수형으로 이루어진 변수를 나눴을 때, 값은 정수형으로 나오게 된다.
// 정수형 하나와 double 변수로 이루어진 나눗셈은 더 큰 값에 따라 나오게 된다. => d/e = 3.333333
// ~a의 값은 ffffff54이다. -> 기본적으로 a는 int형으로 4Byte이므로 전체 00000000_00000000_00000000_10101011에서의 반전이므로 저렇게나오는것임
// shift도 동일하게 4Byte int형 변수의 의무를 따른다.