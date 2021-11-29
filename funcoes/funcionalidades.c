void incluirLivro() 
{
	FILE *arq;
    arq = fopen("acervoLivros.txt", "ab");
    LIVRO livro;

    if (arq == NULL) 
	{
        printf("      ERRO! O arquivo não foi aberto!\n");
        system("pause");
    }
    else 
	{
        cabecalhoCaso1();
        inicio:
        
        printf("\n      Digite o código do livro: ");
        fflush(stdin);
        fgets(livro.codigo, 5, stdin);
        
        printf("      Digite o titulo: ");
        fflush(stdin);
        fgets(livro.titulo, 100, stdin);

        printf("      Digite o nome do autor(a): ");
        fflush(stdin);
        fgets(livro.autor, 50, stdin);

        printf("      Digite o numero da edicao: ");
        fflush(stdin);
        fgets(livro.num_edicao, 3, stdin);

        printf("      Digite o nome da editora: ");
        fflush(stdin);
        fgets(livro.editora, 50, stdin);

        printf("      Digite o ano da publicacao: ");
		scanf("%d", &livro.ano_pub);

        printf("      Digite o total de paginas do livro: ");
        scanf("%d", &livro.num_page);
        
        fwrite(&livro, sizeof(LIVRO), 1, arq);
    }

    fclose(arq);

    printf("\n      Dados gravados com sucesso!");
    printf("\n\n      Clique em qualquer botão para voltar para o menu principal...");
    getch();
}

void consultarLivro()
{	
	FILE *arq;
    arq = fopen("acervoLivros.txt", "ab");
    LIVRO livro;
	
	if (arq == NULL) 
	{
        printf("      ERRO! O arquivo não foi aberto!\n");
        system("pause");
    }
    else 
	{
		cabecalhoCaso2();
		
		
	}

	fclose(arq);	
}

void editarLivro() 
{
	FILE *arq, *arq2;
    arq = fopen("acervoLivros.txt", "r+b");
    arq2 = fopen("acervoLivros2.txt", "w+b");
    LIVRO livro;

    if (arq == NULL) 
	{
        printf("      ERRO! O arquivo não foi aberto!\n");
        system("pause");
    }
    else 
	{
		cabecalhoCaso3();
		
		char codigo[5];
		
		printf("\n      Digite o código do livro que deseja pesquisar: ");
		fflush(stdin);
        gets(codigo);

		while(fread(&livro, sizeof(LIVRO), 1, arq) == 1) 
    	{
    		if(strcmp(codigo, livro.codigo) == 0)
    		{
				printf("\n      Digite o código do livro: ");
		        fflush(stdin);
		        fgets(livro.codigo, 5, stdin);
		        
		        printf("      Digite o titulo: ");
		        fflush(stdin);
		        fgets(livro.titulo, 100, stdin);
		
		        printf("      Digite o nome do autor(a): ");
		        fflush(stdin);
		        fgets(livro.autor, 50, stdin);
		
		        printf("      Digite o numero da edicao: ");
		        fflush(stdin);
		        fgets(livro.num_edicao, 3, stdin);
		
		        printf("      Digite o nome da editora: ");
		        fflush(stdin);
		        fgets(livro.editora, 50, stdin);
		
		        printf("      Digite o ano da publicacao: ");
				scanf("%d", &livro.ano_pub);
		
		        printf("      Digite o total de paginas do livro: ");
		        scanf("%d", &livro.num_page);	
				
				fwrite(&livro, sizeof(LIVRO), 1, arq2);	
			}
			else {
				fwrite(&livro, sizeof(LIVRO), 1, arq2);	
			}
    	}
	}
	
	fclose(arq);
	fclose(arq2);
	remove("acervoLivros.txt");
	rename("acervoLivros2.txt", "acervoLivros.txt");
	
	printf("\n\n      Clique em qualquer botão para voltar para o menu principal...");
    getch();
}

void verTodosLivros()
{
	FILE *arq;
    arq = fopen("acervoLivros.txt", "rb");
    LIVRO livro;

    if (arq == NULL) 
	{
        printf("      ERRO! O arquivo não foi aberto!\n");
        system("pause");
    }
    else 
	{
		cabecalhoCaso4();
    	while(fread(&livro, sizeof(LIVRO), 1, arq) == 1) 
    	{
    		printf("\n      ------------------------------------\n");
			printf("\n      Código: %s", livro.codigo);
			printf("\n      Título: %s", livro.titulo);
			printf("      Autores: %s", livro.autor);
			printf("      Número da edição: v.%s", livro.num_edicao);
			printf("      Nome da editora: %s", livro.editora);
			printf("      Ano de publicação: %d", livro.ano_pub);
			printf("\n      Número de páginas: %dp.\n", livro.num_page);
			printf("\n      ------------------------------------\n");
		}
		
		printf("\n      ------------- FIM DO ACERVO ---------------\n");
	}
	
	fclose(arq);
	printf("\n\n      Clique em qualquer botão para voltar para o menu principal...");
    getch();
}
