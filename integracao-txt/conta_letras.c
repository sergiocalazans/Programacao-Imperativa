#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h> // Necessário para a função tolower()

int main(void)
{
  // --- ETAPA 1: CONFIGURAÇÃO E DECLARAÇÃO DE VARIÁVEIS ---

  // Configura para a localidade local para lidar melhor com caracteres
  setlocale(LC_ALL, "");

  FILE *arquivo;
  int c;     // Variável para ler cada caractere do arquivo (como int para pegar o EOF)
  int i = 0; // Índice para o vetor 'letrasDoArquivo'

  // Vetor para armazenar TODOS os caracteres lidos do arquivo.
  // Aumente o tamanho se seu arquivo for muito grande.
  char letrasDoArquivo[5000];

  // Vetor para a contagem. 26 posições para a-z e 1 extra para o 'ç'.
  // {0} inicializa todos os 27 elementos com o valor 0.
  int contagemLetras[27] = {0};

  // --- ETAPA 2: LER O ARQUIVO E ARMAZENAR NO PRIMEIRO VETOR ---

  arquivo = fopen("nomes.txt", "r");
  if (arquivo == NULL)
  {
    printf("Erro ao tentar abrir o arquivo!\n");
    exit(1);
  }

  printf("Lendo o arquivo e armazenando as letras...\n");

  // Loop para ler caractere por caractere e guardar no vetor 'letrasDoArquivo'
  while ((c = fgetc(arquivo)) != EOF)
  {
    letrasDoArquivo[i] = (char)c;
    i++;
    // Medida de segurança para não estourar o vetor
    if (i >= 4999)
    {
      break;
    }
  }
  letrasDoArquivo[i] = '\0'; // Adiciona um terminador nulo para marcar o fim do conteúdo

  fclose(arquivo); // Fecha o arquivo pois já lemos tudo dele

  printf("Nomes encontrados:\n---\n%s\n---\n\n", letrasDoArquivo);

  // --- ETAPA 3: PERCORRER O VETOR E CONTAR CADA LETRA ---

  printf("Analisando e contando as letras...\n\n");

  for (int j = 0; letrasDoArquivo[j] != '\0'; j++)
  {
    // Pega o caractere atual e converte para minúsculo para unificar a contagem ('A' e 'a' contam juntos)
    char letraAtual = tolower(letrasDoArquivo[j]);

    // Verifica se é uma letra de 'a' a 'z'
    if (letraAtual >= 'a' && letraAtual <= 'z')
    {
      // A mágica acontece aqui: 'a' - 'a' = 0, 'b' - 'a' = 1, 'c' - 'a' = 2, ...
      // Isso nos dá o índice correto no vetor de contagem.
      contagemLetras[letraAtual - 'a']++;
    }
    // Casos especiais para o português
    else if (letraAtual == 'ç')
    {
      contagemLetras[26]++; // Usamos a última posição (índice 26) para o 'ç'
    }
    else if (letraAtual == 'á' || letraAtual == 'à' || letraAtual == 'â' || letraAtual == 'ã')
    {
      contagemLetras['a' - 'a']++; // Conta todas como 'a'
    }
    else if (letraAtual == 'é' || letraAtual == 'ê')
    {
      contagemLetras['e' - 'a']++; // Conta todas como 'e'
    }
    else if (letraAtual == 'í')
    {
      contagemLetras['i' - 'a']++; // Conta como 'i'
    }
    else if (letraAtual == 'ó' || letraAtual == 'ô' || letraAtual == 'õ')
    {
      contagemLetras['o' - 'a']++; // Conta todas como 'o'
    }
    else if (letraAtual == 'ú')
    {
      contagemLetras['u' - 'a']++; // Conta como 'u'
    }
  }

  // --- ETAPA 4: IMPRIMIR O RESULTADO DA CONTAGEM ---

  printf("Resultado da contagem:\n");

  // Loop de 'a' até 'z'
  for (int j = 0; j < 26; j++)
  {
    // Só imprime as letras que apareceram pelo menos uma vez
    if (contagemLetras[j] > 0)
    {
      // Recalcula a letra a partir do índice (0 -> 'a', 1 -> 'b', ...)
      printf("Letra '%c': %d vez(es)\n", 'a' + j, contagemLetras[j]);
    }
  }

  // Imprime a contagem do 'ç' separadamente
  if (contagemLetras[26] > 0)
  {
    printf("Letra 'ç': %d vez(es)\n", contagemLetras[26]);
  }

  return 0;
}
