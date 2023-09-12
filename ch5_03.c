#include <stdio.h>

int main()
{
    int x, y, z, tmp1, tmp2;

    printf("3개의 정수를 입력하시오: ");
    scanf("%d %d %d", &x, &y, &z);

    tmp1 = x > y ? x : y;
    tmp2 = tmp1 > z ? tmp1 : z;
    printf("최대값: %d\n", tmp2);

    return 0;
}