#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("班級：五專資工一甲\n");
    printf("學號：5B3G0036\n");
    printf("姓名：陳相樺\n\n");

    int a = 8, b = 16, c = 32, d = 64, e = 128, f = 256,  g = 512, h = 1024, j = 2048, i = 4096; 
    printf("a > b || c < d || e < f || g > h 結果為真，以%d表示之。\n", a > b || c < d || e < f || g > h);
    printf("a > b && c < d && e < f && g > h 結果為真，以%d表示之。\n", a > b && c < d && e < f && g > h);
    printf("!(a > b) && !(c < d) || !(e < f) && !(g > h) || !(i > j)結果為假，以%d表示之。", !(a > b) && !(c < d) || !(e < f) && !(g > h) || !(i > j));
}