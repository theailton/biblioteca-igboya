#include <locale.h>
// O arquivo carrega todos os menus e headers utilizados pelo programa

void menuFuncionalidade()
{
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n      ---- BIBLIOTECA IGBOYA ----\n\n");
    printf("      [1] - Incluir novo livro \n      [2] - Consultar livro \n      [3] - Alterar dados de um livro \n      [4] - Ver todos os livros da biblioteca \n      [5] - Sair do programa\n\n", setlocale(LC_ALL, "Portuguese"));
	printf("      Digite sua opcao: ", setlocale(LC_ALL, "Portuguese"));
}

// Cabe�alhos
void cabecalhoCaso1()
{
	system("cls");
	printf("\n      ---- BIBLIOTECA �GBOY� ----\n\n");
	printf("      >>> Incluir novo livro \n");
}

void cabecalhoCaso2()
{
	system("cls");
	printf("\n      ---- BIBLIOTECA �GBOY� ----\n\n");
	printf("      >>> Consultar livro \n");
}

void cabecalhoCaso3()
{
	system("cls");
	printf("\n      ---- BIBLIOTECA �GBOY� ----\n\n");
	printf("      >>> Alterar dados de um livro\n");
}

void cabecalhoCaso4()
{
	system("cls");
	printf("\n      ---- BIBLIOTECA �GBOY� ----\n\n");
	printf("      >>> Ver todos os livros da biblioteca\n");
}
