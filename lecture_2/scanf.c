#include <stdio.h>

int main() {
    int in;
    short sh;
    long lg;

    float fl;
    double db;

    char ch;


    printf("char :");
    scanf("%c", &ch);

    printf("int :");
    scanf("%d", &in);

    printf("short :");
    scanf("%hd", &sh);

    printf("long :");
    scanf("%ld", &lg);

    printf("float :");
    scanf("%f", &fl);

    printf("double :");
    scanf("%lf", &db);


    printf("char: %c, short: %d, int: %d, long: %ld\n", ch, sh, in, lg);
    printf("float : %f, double : %f", fl, db);

    return 0;


}

// scanf는 맞춰서 넣어줘야하고, printf는 괜찮다