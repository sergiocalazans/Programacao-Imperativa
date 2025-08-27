#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
#include <wctype.h>
#include <io.h>
#include <fcntl.h>

int main()
{
  // Altera o modo do stdin e stdout para UTF-16 no Windows
  _setmode(_fileno(stdin), _O_U16TEXT);
  _setmode(_fileno(stdout), _O_U16TEXT);

  setlocale(LC_ALL, ""); // Usa a localidade do sistema
  FILE *arquivo;
  wchar_t nome[100];

  arquivo = fopen("nomes.txt", "a, ccs=UTF-8"); // garante UTF-8 no Windows
  if (arquivo == NULL)
  {
    wprintf(L"Erro ao abrir o arquivo!\n");
    return 1;
  }

  wprintf(L"Digite um nome para gravar no arquivo (digite 'sair' para encerrar):\n");

  while (1)
  {
    wprintf(L"Nome: ");
    fgetws(nome, 100, stdin);

    // remove \n
    size_t len = wcslen(nome);
    if (len > 0 && nome[len - 1] == L'\n')
    {
      nome[len - 1] = L'\0';
    }

    if (wcscmp(nome, L"sair") == 0)
    {
      break;
    }

    // transforma primeira letra em maiúscula
    if (nome[0] != L'\0')
      nome[0] = towupper(nome[0]);

    wprintf(L"Nome com Análise: %ls\n", nome);
    fwprintf(arquivo, L"%ls\n", nome);
  }

  fclose(arquivo);
  wprintf(L"Palavras gravadas com sucesso!\n");

  return 0;
}
