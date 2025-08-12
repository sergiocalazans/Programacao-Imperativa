#include <stdio.h>

int main()
{
    double PI = 3.14;
    double raio = 10.0;
    double area = PI * raio * raio;
    printf("%f\n", area);
    printf("%zu\n", sizeof(double));
    return 0;
}