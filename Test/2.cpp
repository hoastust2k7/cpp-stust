#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("班級：五專資工一甲\n");
    printf("學號：5B3G0036\n");
    printf("姓名：陳相樺\n\n");

    printf("字元的長度為：%d 字元組（%d 位元）\n", sizeof(char), sizeof(char) * 8);
    printf("短整數的長度為：%d 字元組（%d 位元）\n", sizeof(short), sizeof(short) * 8);
    printf("整數的長度為：%d 字元組（%d 位元）\n", sizeof(int), sizeof(int) * 8);
    printf("長整數的長度為：%d 字元組（%d 位元）\n", sizeof(long), sizeof(long) * 8);
    printf("無正負號字元的長度為：%d 字元組（%d 位元）\n", sizeof(unsigned char), sizeof(unsigned char) * 8);
    printf("無正負號短整數的長度為：%d 字元組（%d 位元）\n", sizeof(unsigned short), sizeof(unsigned short) * 8);
    printf("無正負號整數的長度為：%d 字元組（%d 位元）\n", sizeof(unsigned int), sizeof(unsigned int) * 8);
    printf("無正負號長整數的長度為：%d 字元組（%d 位元）\n", sizeof(unsigned long int), sizeof(unsigned long int) * 8);
    printf("單精確實數的長度為：%d 字元組（%d 位元）\n", sizeof(float), sizeof(float) * 8);
    printf("倍精確實數的長度為：%d 字元組（%d 位元）\n", sizeof(double), sizeof(double) * 8);
    printf("長倍精確實數的長度為：%d 字元組（%d 位元）\n", sizeof(long double), sizeof(long double) * 8);
}