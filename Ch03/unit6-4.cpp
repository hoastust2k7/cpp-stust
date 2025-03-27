#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a = 10;
    int b = 0;
    printf("假設執行前 a 的初始值為 10：\n結果\n");
    b = ++a;
    printf("|a = %d, b = %d|\n", b, b );
    b = a--;
    printf("|a = %d, b = %d|\n", b, a);
    b = --a;
    printf("|a = %d, b = %d|\n", a, a);
    b = a++;
    printf("|a = %d, b = %d|\n", b, a);
    system("PAUSE");
    return 0;
}