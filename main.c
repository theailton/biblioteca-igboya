#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

#include "libraries/livro.h"
#include "libraries/menuAndHeaders.h"

#include "funcoes/funcionalidades.c"

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
	inicio :
	menuFuncionalidade();
	char decisaoFuncionalidade;
	scanf ("%c", &decisaoFuncionalidade);

	switch (decisaoFuncionalidade)
	{
		case '1': incluirLivro(); break;
		case '2': consultarLivro(); break;
		case '3': editarLivro(); break;
		case '4': verTodosLivros(); break;
		case '5': exit(0);
		default: goto inicio;
	}
	
	goto inicio;
}
