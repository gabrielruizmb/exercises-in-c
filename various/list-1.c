#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define tamanho 10

typedef int tipoChave;

typedef struct
{
    tipoChave chave;
    float preco;
} Produto;

typedef struct
{
    Produto produtos[tamanho];
    int quantidade;
} Lista;

void inicializarLista(Lista *lista)
{
    lista->quantidade = 0;
}

int buscarPosicaoPorChave(Lista *lista, tipoChave chave)
{
    int i = 0;

    while(i < lista->quantidade)
    {
        if(chave == lista->produtos[i].chave)
	{
	    return i;
	}
	i++;
    }

    return -1;
}

int contarRegistros(Lista *lista)
{
    return lista->quantidade;
}

void exibirLista(Lista *lista)
{
    for(int i = 0; i < lista->quantidade; i++)
    {
        printf("%d %f", lista->produtos[i].chave, lista->produtos[i].preco);
    }
}

bool inserirProdutoNaLista(Lista *lista, Produto produto, int posicao)
{
    if(posicao < 0 || posicao > lista->quantidade || lista->quantidade == tamanho)
    {
        printf("Posição inválida!");
	return false;
    }
     
    if(buscarPosicaoPorChave(lista, produto.chave) != -1)
    {
	printf("Esta chave já está sendo usada!");
	return false;
    }

    for(int j = lista->quantidade; j > posicao; j--)
    {
        lista->produtos[j] = lista->produtos[j--];
    }
    lista->produtos[posicao] = produto;
    lista->quantidade++;

    printf("Produto inserido!");
    return true;    
}

void limparTela()
{
    #ifdef __linux__
	system("clear");

    #elif _WIN32
	system("cls");

    #endif
}

int main()
{
    limparTela();

    Lista lista;
    inicializarLista(&lista);

    Produto produto;
    produto.chave = 103;
    produto.preco = 1.50;
    
    Produto produto2;
    produto2.chave = 103;
    produto2.preco = 2.50;

    printf("%d %f", produto.chave, produto.preco);
    printf("%d %f", produto2.chave, produto2.preco);
   
    int posicao = 0;
    inserirProdutoNaLista(&lista, produto, posicao);
    posicao = 1;
    inserirProdutoNaLista(&lista, produto2, posicao);

    return 0;
}
