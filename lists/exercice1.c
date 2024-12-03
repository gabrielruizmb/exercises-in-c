/* Implemente uma lista encadeada na qual cada elemento
representa um produto que possui dois campos, um
inteiro para o código (chave) e um float para o preço.
Para gerenciar a lista a função main apresentará o
seguinte menu: 0 para sair; 1 para inserir um produto; 2
para contar a quantidade de produtos na lista; 3 para
procurar um produto pela chave primária; 4 para
mostrar todos os produtos da lista (com código e preço)
e 5 para eliminar um produto da lista. 6) para ordenar a
lista por Se o usuário escolher inserir um produto o
algoritmo deve solicitar a chave e o preço e logo fazer a
inserção. Códigos repetidos não devem ser permitidos.
O programa só deve finalizar quando o usuário escolher
a opção 0, ou seja, o menu deve estar dentro de um ciclo
de repetições. */ 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define tamanho 10

typedef struct
{
    int chave;
    float preco;
} Produto;

typedef struct
{
    Produto produtos[tamanho];
    int validos;
} Lista;

void iniciarLista();
void menuPrincipal();
void inserirProduto();
int validarChave();

int main()
{
    Lista lista;
    iniciarLista(&lista);

    menuPrincipal(&lista);

    return 0;
}

void iniciarLista(Lista *lista)
{
    lista->validos = 0;
}

void menuPrincipal(Lista *lista)
{
    int escolha = -1;

    system("clear");

    printf("---Mercearia do Chaves---\nMenu principal:\n\n");
    printf("0.Sair\n1.Inserir produto\n2.Contar produtos\n3.Procurar produto");
    printf("\n4.Eliminar produto\n5.Ordernar produtos\n\n");

    while(true)
    { 
	printf("Escolha uma opção: ");
        scanf("%d", &escolha);
        
        switch(escolha)
        {
            case 0: exit(0);          	       break;
	    case 1: inserirProduto(&lista);    break;

            default: printf("Opção inválida. Escolha entre 0 e 5!\n");
    	}
    }
}

void inserirProduto(Lista *lista)
{
    Produto produto;
    produto.chave = 0;
    produto.preco = -1;
    
    printf("Informe a chave do novo produto: ");
    scanf("%d", &produto.chave);

    printf("Informe o preço deste produto: ");
    while(produto.preco < 0)
    {
        scanf("%f", &produto.preco);
	if(produto.preco < 0)
	    printf("Informe um preço válido: ");
    }

    validarChave(&lista);

    printf("%d %f", produto.chave, produto.preco);
}

int validarChave(Lista *lista)
{
    return -1;
}
