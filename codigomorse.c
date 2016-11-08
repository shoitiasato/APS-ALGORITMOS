#include <stdio.h>
#include <string.h>
#include <ctype.h>

static const struct
{
  const char letter, *morse;
} Code[] =
{
  { 'A', ".- "  },{ 'B', "-... " },{ 'C', "-.-. " },{ 'D', "-.. "  },
  { 'E', ". "    },{ 'F', "..-. " },{ 'G', "--. "  },{ 'H', ".... " },
  { 'I', ".. "  },{ 'J', ".--- " },{ 'K', ".-.- " },{ 'L', ".-.. " },
  { 'M', "-- "  },{ 'N', "-. "  },{ 'O', "--- "  },{ 'P', ".--. " },
  { 'Q', "--.- " },{ 'R', ".-. "  },{ 'S', "... "  },{ 'T', "- "    },
  { 'U', "..- "  },{ 'V', "...- " },{ 'W', ".-- "  },{ 'X', "-..- " },
  { 'Y', "-.-- " },{ 'Z', "--.. " },{ ' ', "/"    },{ '1', ".----" },
  { '2', "..---" },{ '3', "...--" },{ '4', "....-" },{ '5', "....." },
  { '6', "-...." },{ '7', "--..." },{ '8', "---.." },{ '9', "----." },
  { '0', "-----" }
};
void codifica(const char *s)
{
  size_t i, j;
  for ( i = 0; s[i]; ++i )
  {
      for ( j = 0; j < sizeof Code / sizeof *Code; ++j )
      {
        if ( toupper(s[i]) == Code[j].letter )
        {
            printf("%s", Code[j].morse);
            break;
        }
      }
  }
  putchar('\n');
}
void decodifica(const char *morse)
{
   printf("função decodifica\n");
  size_t i, j;
  for ( i = 0; morse[i]; )
  {
      for ( j = 0; j < sizeof Code / sizeof *Code; ++j )
      {
        size_t size = strlen(Code[j].morse);
        if ( memcmp(Code[j].morse, &morse[i], size) == 0 )
        {
            putchar(Code[j].letter);
            i += size;
            break;
        }
      }
  }
  putchar('\n');
}
int main(void)
{
  int op=0;
    printf("\t\t\t\tDigite sua opcao\n1_Codificar\n2_Decodificar\n:");
    scanf("%d",&op);
    switch (op)
      {
      case 1:
        {
        printf("CODIFICAR\n");
        file *arq;
        arq = fopen("decodificado.txt","a");
        codifica(text);
        break;
        }
      case 2:
        {
        printf("DECODIFICAR\n");
        file *arq;
        arq = fopen("codificado.txt","a");
        int len;
    len = strlen(test);
      if (test[len -1]!=' ')
          {
         strcat(test," "); //se falta space .. coloca um ;)
         }
        decodifica(test);
        break;
        }
      default:
        {
        printf("voce digitou uma opcao nao correspondente!!");
        main();
        break;
        }
      }
 
  return 0;
}