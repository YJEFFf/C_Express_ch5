#include <stdio.h>

int main()
{
    double cm, ft, in;

    printf("키를 입력하시오(cm): ");
    scanf("%lf", &cm);

    ft = cm / (2.54 * 12);
    in = (ft - (int)ft) * 12;
    printf("%lfcm는 %d피트 %lf인치입니다.\n", cm, (int)ft, in);

    return 0;
}