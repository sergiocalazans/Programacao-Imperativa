#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
  /*
  Escreva um programa que imprima os valores máximo e
  mínimo para variáveis dos seguintes tipos:

  1. int
  2. unsigned int
  3. short
  4. unsigned short
  5. long
  6. float
  7. double
  8. long double
  */

  printf("\n-------------------------------------------------------------");
  printf("\nValor minimo do tipo Int: %d\n", INT_MIN);
  printf("\nValor minimo do tipo Int: %d\n", INT_MAX);
  printf("\n-------------------------------------------------------------");
  printf("\nValor maximo do tipo Unsigned Int: %u\n", UINT_MAX);
  printf("\n-------------------------------------------------------------");
  printf("\nValor minimo do tipo Short: %d\n", SHRT_MIN);
  printf("\nValor maximo do tipo Short: %d\n", SHRT_MAX);
  printf("\n-------------------------------------------------------------");
  printf("\nValor maximo do tipo Unsigned Short: %d\n", USHRT_MAX);
  printf("\n-------------------------------------------------------------");
  printf("\nValor minimo do tipo Long: %d\n", LONG_MIN);
  printf("\nValor maximo do tipo Long: %d\n", LONG_MAX);
  printf("\n-------------------------------------------------------------");
  printf("\nValor minimo do tipo Float: %d\n", FLT_MIN);
  printf("\nValor maximo do tipo Float: %d\n", FLT_MAX);
  printf("\n-------------------------------------------------------------");
  printf("\nValor minimo do tipo Double: %d\n", DBL_MIN);
  printf("\nValor maximo do tipo Double: %d\n", DBL_MAX);
  printf("\n-------------------------------------------------------------");
  printf("\nValor minimo do tipo Long Double: %d\n", LDBL_MIN);
  printf("\nValor maximo do tipo Long Double: %d\n", LDBL_MAX);
  printf("\n-------------------------------------------------------------");
  printf("\nValor minimo do tipo Char: %d\n", CHAR_MIN);
  printf("\nValor maximo do tipo Char: %d\n", CHAR_MAX);
  printf("\n-------------------------------------------------------------");
  printf("\nValor maximo do tipo Unsigned Char: %d\n", UCHAR_MAX);
  printf("\n-------------------------------------------------------------");
  printf("\nValor maximo do tipo Unsigned Long: %d\n", ULONG_MAX);
  printf("\n-------------------------------------------------------------");
  return 0;
}
