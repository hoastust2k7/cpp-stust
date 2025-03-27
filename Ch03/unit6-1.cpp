#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int x = 5;
    printf("結果：\n");
    printf("x <-- %d\n", x, x);
    printf("x <-- %d + 4 = %d\n", x,  x + 4);
    printf("x <-- %d - 2 = %d\n", x,  x - 2);
    printf("x <-- %d * 3 = %d\n", x, x * 3);
    printf("x <-- %d / 2 = %d\n", x, x / 2);
    printf("x <-- %d %% 2 = %d\n", x, x % 2);
    system("PAUSE");
    return 0;
}