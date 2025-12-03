#include <stdio.h>

int main() {

    // char
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    printf("char: %c\n", c);
    printf("signed char: %d\n", sc);
    printf("unsigned char: %u\n", uc);

    // short
    short s = -3000;
    unsigned short us = 60000;

    printf("short: %d\n", s);
    printf("unsigned short: %u\n", us);

    // int
    int i = -100000;
    unsigned int ui = 300000;

    printf("int: %d\n", i);
    printf("unsigned int: %u\n", ui);

    // long int
    long li = -2000000000;
    unsigned long uli = 4000000000;

    printf("long int: %ld\n", li);
    printf("unsigned long int: %lu\n", uli);

    // long long int
    long long lli = -9000000000000000000;
    unsigned long long ulli = 18000000000000000000U;

    printf("long long int: %lld\n", lli);
    printf("unsigned long long int: %llu\n", ulli);

    // float
    float f = 3.14f;
    printf("float: %f\n", f);

    // double
    double d = 2.718281828;
    printf("double: %f\n", d);

    // long double
    long double ld = 1.6180339887L;
    printf("long double: %Lf\n", ld);

    return 0;
}
