#include <stdio.h>

int main()
{
    int x;

    printf("정수를 업력하시오: ");
    scanf("%d", &x);
    printf("2의 보수: %d\n", ~x + 1);

    return 0;
}