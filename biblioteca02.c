#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// --- Constantes Globais ---
#define MAX_LIVROS 50
#define MAX_EMPRESTIMO 100 // Definimos a capacidade para emprstimos.
#define TAM_TRING 100

// --- Definição das Estruturas --- 
// Struct Livro agora tem um campo 'Disponível' para controlar o status
struct Livro {
    char nome[TAM_TRING];
    char autor[TAM_TRING];
    char editora[TAM_TRING];
    int edicao;
    int disponivel; // 1 para sim, 0 para não.
};

// Nova struct para armazenar informações do empréstimo.
struct Emprestimo {
    int indiceLivro; //Para saber qual livro do array 'biblioteca' foi emprestado.
    char nomeUsuario[TAM_TRING];
};

//--- Função para limpar o buffer de entrada ---
void limparBufferEntrada() {
    int c;
    while ((c= getchar()) !='\n' && c != EOF);
}

// --- Função principal (main) --- 
int main() {
    // 1.ALOCAÇÃO DINÂMICA DE MEMÓRIA
    // Agora, em vez de arrays estáticos, usamos ponteiros.
    struct Livro *biblioteca;
    struct Emprestimo *emprestimos;

    // Usamos calloc para o array de livros. calloc(num_elementos, tamanho_de_cada_elemento)
    // Vantagem: inicializa toda a memória com zeros. Isso significa que 'disponivel' já começa com zero
    biblioteca = (struct Livro *) calloc(MAX_LIVROS, sizeof(struct Livro));

    // Usamos malloc para o array de empréstimos. malloc(tamanho_em_bytes)
    emprestimos = (struct Emprestimo *) malloc(MAX_EMPRESTIMO * sizeof(struct Emprestimo));

    // VERIFICAÇÃO: É crucial verificar se a alocação de memória deu certo.
    if (biblioteca == NULL || emprestimos == NULL) {
        printf("Erro: Falha ao alocar memoria. \n");
        return 1; // Retorna 1 para indicar um erro.
    }

    int totalLivros = 0;
    int totalEmprestimos = 0;
    int opcao;

    do {
        printf("=======================================\n");
        printf("   BIBLIOTECA - PARTE 2\n");
        printf("=======================================\n");
        printf("1. Cadastrar novo livro\n");
        printf("2. Listar todos os livros\n");
        printf("3. Realizar emprestimo\n");
        printf("4. Listar emprestimo\n");
        printf("0. SAIR\n");
        printf("-----------------------------------------\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        limparBufferEntrada();

        switch (opcao) {
            case 1: // CADASTRO DE LIVRO
                printf("--- Cadasssssstro de Novo Livro ----\n\n");
                if (totalLivros < MAX_LIVROS);{
                    // O acesso aos campos é igual ao do array estático.
                    printf("Digite o nome do livro: ");
                    fgets(biblioteca[totalLivros].nome, TAM_TRING, stdin);

                    //...(demais leituras são iguais à parte 1)...
                    printf("Digite o autor: ");
                    fgets(biblioteca[totalLivros].editora, TAM_TRING, stdin);

                    biblioteca[totalLivros].nome[strcspn(biblioteca[totalLivros].nome), "\n")] = '\'
                }

        }

    }


    {
        /* data */
    };
    )
}