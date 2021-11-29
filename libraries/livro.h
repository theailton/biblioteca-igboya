typedef struct livro LIVRO;

struct livro {
	char codigo[5];
    char titulo[100];
    char autor[50];
    char num_edicao[3];
    char editora[50];
    int ano_pub;
    int num_page;
};
