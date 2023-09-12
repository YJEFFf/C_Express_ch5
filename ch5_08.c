#include <stdio.h>

int main()
{
    double r, area, volume;
    const double PIE = 3.141592;

    printf("구의 반지름을 입력하시오: ");
    scanf("%lf", &r);

    area = 4 * PIE * r * r;
    volume = (4.0) / (3.0) * PIE * r * r * r;
    printf("표면적은 %lf입니다.\n", area);
    printf("체적은 %lf입니다.\n", volume);

    return 0;
}