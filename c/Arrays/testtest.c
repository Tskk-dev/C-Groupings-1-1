#include <stdio.h>

char funct1(char a, char b) {
    a = 'c';
    b = 'd';
    if (a < b)
        return a;
    else
        return b;
}

char funct2(char *a, char *b) {
    *a = 'c';
    *b = 'd';
    if (a == b)
        return *a;
    else
        return *b;
}

int main() {
    char a = 'a';
    char b = 'b';
    char c, d;

    c = funct1(a, b);
    printf("1.a = %c  b = %c\n", a, b);

    d = funct2(&a, &b);
    printf("2. a = %c  b = %c\n", a, b);

    return 0;
}
