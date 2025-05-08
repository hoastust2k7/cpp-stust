#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("班級：五專資工一甲\n");
    printf("學號：5B3G0036\n");
    printf("姓名：陳相樺\n\n");

    float a = 20.75, b = 10.15, c, d, e, f, g;
    printf("a = %.2f, b = %.2f, c, d, e, f, g\n", a, b);
    printf("c = a++ + 5.5, = %.2f, ", c = a++ + 5.5);printf("a = %.2f\n", a);
    printf("b = %.2f, d = a - ++b = %.1f\n", b, d = a - ++b);
    printf("g = %.1f, e = g - 2.35 = %.2f\n", g, e = (g = d) - 2.35);
    printf("(20.5 == 21) %s 其值為 %d, f = 0 - 4.55 = %.2f\n", 20.5 == 21 ? "true" : "false", f = (20.5 == 21) - 4.55);
    printf("a = %.1f, g -= --a - b++ = %.f, ", a, g -= --a - b++, b);printf("b = %.2f\n", b);
}