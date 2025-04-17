#include <stdio.h>
#include <stdlib.h>

#define top_side_text "上底邊長："
#define top_side float(9.5)
#define down_side_text "下底邊長："
#define down_side float(19.5)
#define high_text "高邊長："
#define high float(29.5)
#define area_text "梯形面積："
float get_area(void){
    float area;
    area = (top_side + down_side) * high / 2;
    return(area);
}

int main() {
    printf("班級：五專資工一甲\n");
    printf("學號：5B3G0036\n");
    printf("姓名：陳相樺\n\n");

    printf("%s%.1f\n", top_side_text, top_side );
    printf("%s%.1f\n", down_side_text, down_side );
    printf("%s%.1f\n", high_text, high );
    printf("%s%.2f\n", area_text, get_area());
    // float top = 9.5;
    // float down = 19.5;
    // float high = 29.5;
    // printf("上底邊長：%.1f 公尺\n", top);
    // printf("下底邊長：%.1f 公尺\n", down);
    // printf("高邊長：%.1f 公尺\n", high);
    // printf("梯形面積：%.2f 平方公尺\n", (top + down) * high / 2);
}
