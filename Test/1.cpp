#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("班級：五專資工一甲\n");
    printf("學號：5B3G0036\n");
    printf("姓名：陳相樺\n\n");

    float top = 9.5;
    float down = 19.5;
    float high = 29.5;
    printf("上底邊長：%.1f 公尺\n", top);
    printf("下底邊長：%.1f 公尺\n", down);
    printf("高邊長：%.1f 公尺\n", high);
    printf("梯形面積：%.2f 平方公尺\n", (top + down) * high / 2);
}