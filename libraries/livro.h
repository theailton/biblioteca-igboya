typedef struct livro LIVRO;

struct livro {
    char titulo[100];
    char autor [100];
    char num_edicao [5];
    char editora[25];
    int ano_pub;
    int num_page;
};