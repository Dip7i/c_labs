#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    printf("Enter x { -80.0 <= x <= 80.0 } -> ");
    scanf("%lf", &x);
    if (-80.0 <= x && x <= 80.0)
    {
        double y = acos(2 * sin(x));
        double z = sqrt(cos(y*y));
        printf("y(x) = %lf\nz(y) = %lf\n", y, z);
    }
    else
        printf("x value is incorrect!\n");
    return 0;
}