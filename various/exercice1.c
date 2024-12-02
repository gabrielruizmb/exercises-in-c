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
#define size 10

typedef struct
{
    int key;
    float price;
} Product;

typedef struct
{
    Product products[size];
    int quantity;
} List;

void startList();
void mainMenu();
void insertProduct();

int main()
{
    List l;

    startList(&l);

    mainMenu();

    return 0;
}

void startList(List *l)
{
    l->quantity = 0;
}

void mainMenu()
{
    int choice = -1;

    system("clear");

    printf("---Mercearia do Chaves---\nMenu principal:\n\n");
    printf("0.Sair\n1.Inserir produto\n2.Contar produtos\n3.Procurar produto");
    printf("\n4.Eliminar produto\n5.Ordernar produtos\n\n");

    while(true)
    { 
        scanf("%d", &choice);

        switch(choice)
        {
            case 0: exit(0);    	break;
	    case 1: insertProduct();    break;

            default: printf("Opção inválida. Escolha entre 0 e 5!");
    	}
    }
}

void insertProduct()
{
    Product newProduct;
     
    printf("Informe a chave do novo produto: ");
    scanf("%d", &newProduct.key);
    printf("Informe o preço deste produto: ");
    scanf("%f", &newProduct.price);

    printf("%d %f", newProduct.key, newProduct.price);

    mainMenu();
}
