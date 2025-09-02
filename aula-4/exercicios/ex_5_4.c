/*
(5.4) Escreva um programa em C que seja equivalente ao
programa em Python ao lado.
# Python
# Cálculo do volume de uma esfera de raio R
PI = 3.1416
R = 0
while R <= 6:
    VOLUME = 4/3 * PI * (R**3)
    print(R, VOLUME)
    R = R + 2
*/
#include <stdio.h>
#include <math.h> // Para a função pow()

int main()
{
  const double PI = 3.1416;
  double R = 0.0;
  double VOLUME;

  printf("Raio (R) | Volume da Esfera\n");
  printf("---------------------------\n");

  while (R <= 6)
  {
    // Usa-se 4.0/3.0 para garantir a divisão de ponto flutuante
    VOLUME = (4.0 / 3.0) * PI * pow(R, 3);
    printf("%8.1f | %16.4f\n", R, VOLUME);
    R = R + 2;
  }

  return 0;
}
