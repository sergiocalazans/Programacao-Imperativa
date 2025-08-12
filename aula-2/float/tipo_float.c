#include <stdio.h>
int main()
{
    printf("Exercicio tipo float\n");
    float PI = 3.14;
    float raio = 10.0;
    float area = PI * raio * raio;
    printf("%f\n", area);
    printf("%zu\n", sizeof(float));
    return 0;
}