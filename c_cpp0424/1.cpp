#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("班級：五專資工一甲\n");
    printf("學號：5B3G0036\n");
    printf("姓名：陳相樺\n\n");
    
    int a = 20, b = 10, c, d, e, f, g;
    printf("/* c = 20 - 5 = %d, a = %d */\n", c = a-- - 5, a);
    printf("/* b = %d, d = 19 + 9 = %d */\n", b, d = a + --b);
    printf("/* g = %d, e = 28 + 2 = %d */\n", g, e = (g = d) + 2, g);
    printf("/* (20 == 20) true 其值為 %d, f = 1 + 4 = %d */\n", (20 == 20), f = (20 == 20) + 4);
    printf("/* a = %d, g = 28 + 20 + 9 = %d, b = %d */\n", a, g += ++a + b--, b);
}