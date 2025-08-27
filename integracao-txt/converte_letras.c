#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>  // Essencial para wide characters (wchar_t)
#include <wctype.h> // Essencial para towupper()

int main(void)
{
  // --- 1. CONFIGURAÇÃO E ABERTURA DOS ARQUIVOS ---

  // Configura o programa para usar a localidade do sistema,
  // o que é crucial para que towupper() saiba como converter 'é' para 'É'.
  setlocale(LC_ALL, "");

  FILE *arquivoEntrada;
  FILE *arquivoSaida;

  // Buffer para armazenar cada linha lida do arquivo
  wchar_t linha[256]; // Usamos wchar_t para suportar acentos

  // Abre o arquivo original para leitura.
  // O modo "r, ccs=UTF-8" é uma instrução (especialmente no Windows) para
  // ler o arquivo como UTF-8 e converter para wide char.
  arquivoEntrada = fopen("nomes.txt", "r");
  if (arquivoEntrada == NULL)
  {
    fwprintf(stderr, L"ERRO: Não foi possível abrir o arquivo 'nomes.txt' para leitura.\n");
    exit(1);
  }

  // Abre (ou cria) o arquivo de destino para escrita.
  // O modo "w, ccs=UTF-8" garante que o novo arquivo será salvo em UTF-8.
  arquivoSaida = fopen("nomes_caixa_alta.txt", "w");
  if (arquivoSaida == NULL)
  {
    fwprintf(stderr, L"ERRO: Não foi possível criar o arquivo 'nomes_caixa_alta.txt'.\n");
    fclose(arquivoEntrada); // Fecha o arquivo que já foi aberto
    exit(1);
  }

  wprintf(L"Processando arquivos...\n");

  // --- 2. LEITURA, CONVERSÃO E GRAVAÇÃO ---

  // Loop: enquanto for possível ler uma linha do arquivo de entrada...
  while (fgetws(linha, sizeof(linha) / sizeof(wchar_t), arquivoEntrada) != NULL)
  {
    // Itera por cada caractere da linha que acabamos de ler
    for (int i = 0; linha[i] != L'\0'; i++)
    {
      // Converte o caractere para sua versão maiúscula
      linha[i] = towupper(linha[i]);
    }

    // Escreve a linha, já convertida, no arquivo de saída
    fputws(linha, arquivoSaida);
  }

  // --- 3. FINALIZAÇÃO ---

  // Fecha ambos os arquivos para garantir que tudo foi salvo corretamente
  fclose(arquivoEntrada);
  fclose(arquivoSaida);

  wprintf(L"Arquivo 'nomes_caixa_alta.txt' criado com sucesso!\n");

  return 0;
}
