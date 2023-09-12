#include <stdio.h>

int main()
{
    double r, a, d;
    const double PIE = 3.14;

    printf("거리를 입력하시오: ");
    scanf("%lf", &d);
    printf("각도를 입력하시오: ");
    scanf("%lf", &a);

    r = (360 * d) / (2 * PIE * a);
    printf("지구의 반지름은 %lf\n", r);

    return 0;
}