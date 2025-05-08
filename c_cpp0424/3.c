#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("班級：五專資工一甲\n");
    printf("學號：5B3G0036\n");
    printf("姓名：陳相樺\n\n");

    int i = 5, j, k = 3;
    float x = 5.5, y;
    j = i / k;
    y = i / k;
    printf("%d\n", j);
    printf("%d\n", i / k);
    printf("%f\n", y);
    printf("%f\n\n", (float)i / k);
    y = x / k;
    printf("%f\n", y);
    printf("%f\n", x / k);
    printf("%f\n\n", (float)x / k);
    j = x / k;
    printf("%d\n", j);
    printf("%f\n", j);
    printf("%f\n\n", x / k);
}
// printf("====i等於7.5, k等於2.7, x等於3.3====\n");
// i = 7.5, k = 2.7, x = 3.3;
// printf("%d\n", k);
// printf("%.f\n", i / x);
// printf("%f\n", k / x);