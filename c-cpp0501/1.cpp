#include <stdio.h>
#include <stdlib.h>
#include <cmath>

int main(int argc, char *argv[]) {
    printf("班級：五專資工一甲\n");
    printf("學號：5B3G0036\n");
    printf("姓名：陳相樺\n\n");

    float PI = 3.14159;
    float radius = 10.0;
    printf("阿里巴巴在臺南科技大學進行街頭才藝表演活動\n");
    printf("半徑%.f公分，圓面積為%.2f平方公分\n", radius, PI * radius * radius);
    printf("半徑%.f公分，球表面積為%.3f平方公分\n", radius, 4.0 * PI * radius * radius);
    printf("半徑%.f公分，球體積為%.4f平方公分\n", radius, (4.0 / 3.0) * PI * radius * radius * radius);
    printf("半徑%.f公分，圓心角60度，扇形面積為%.4f平方公分\n\n", radius, (PI * radius * radius * 60) / 360);

    printf("圓形外半徑15公分，圓形內半徑10公分，環形面積為%.3f平方公分\n", PI * (15 * 15 - 10 * 10));
    printf("圓形外半徑15公分，圓形內半徑10公分，圓心角90度，弧形面積為%.4f平方公分\n\n", (PI * (15 * 15 - 10 * 10) * 90) / 360);

    radius = 7.98;
    float height = 5.62;
    printf("圓柱體圓半徑%.2f公分，圓柱體高%.2f公分，圓柱表面積為%.5f平方公分\n", radius, height, 2 * PI * radius * (radius + height));
    printf("圓柱體圓半徑%.2f公分，圓柱體高%.2f公分，圓柱體面積為%.5f平方公分\n\n", radius, height, PI * (radius * radius) * height);

    radius = 10.0;
    height = 7.01;
    float l = sqrt(radius * radius + height * height);
    printf("圓錐體圓半徑%.f公分，圓錐體高%.2f公分，圓錐表面積為%.5f平方公分\n", radius, height, PI * radius * (radius + l));
    printf("圓錐體圓半徑%.f公分，圓錐體高%.2f公分，圓錐體面積為%.5f平方公分\n\n", radius, height, (1.0 / 3.0) * PI * (radius * radius) * height);

    float trapezoid_length1 = 0.5;
    float trapezoid_length2 = 5.0;
    float trapezoid_height = 9.7;
    printf("梯形上底長度%.1f公分，梯形下底長度%.f公分，梯形高度%.1f公分，梯形面積為%.3f平方公分\n",trapezoid_length1, trapezoid_length2, trapezoid_height, (trapezoid_length1 + trapezoid_length2) * trapezoid_height / 2);
    return 0;
}