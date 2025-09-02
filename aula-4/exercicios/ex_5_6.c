/*
(5.6) Converta o programa em Python ao lado
para um programa em C, usando do-while.
# Python
PI = 3.1416
R = 0
while R <= 6:
    VOLUME = 4/3 * PI * (R**3)
    print(R, VOLUME)
    R = R + 2
*/
#include <stdio.h>
#include <math.h>

int main()
{
  const double PI = 3.1416;
  double R = 0.0;
  double VOLUME;

  printf("Raio (R) | Volume da Esfera\n");
  printf("---------------------------\n");

  do
  {
    VOLUME = (4.0 / 3.0) * PI * pow(R, 3);
    printf("%8.1f | %16.4f\n", R, VOLUME);
    R = R + 2;
  } while (R <= 6);

  return 0;
}
