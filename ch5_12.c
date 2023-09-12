#include <stdio.h>

int main()
{
    char ch1, ch2, ch3, ch4;
    unsigned int ui = 0x00000000;

    printf("첫번째 문자를 입력하시오: ");
    scanf(" %c", &ch1);
    printf("두번째 문자를 입력하시오: ");
    scanf(" %c", &ch2);
    printf("세번째 문자를 입력하시오: ");
    scanf(" %c", &ch3);
    printf("네번째 문자를 입력하시오: ");
    scanf(" %c", &ch4);

    ui = ui | ch1;
    ui = ui | ch2 << 8;
    ui = ui | ch3 << 16;
    ui = ui | ch4 << 24;

    printf("결과값: %x\n", ui);

    return 0;
}