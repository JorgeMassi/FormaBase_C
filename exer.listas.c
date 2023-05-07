#include <stdio.h>
#include <stdlib.h>




int length(struct Node* head)
{
    // vari�vel tempor�ria que percorre a lista
    struct Node* current = head;
    int count = 0; // contador

    while(current != NULL)
        {
        // se NULL, chegou ao fim da lista
        count++;
        current = current->next; // proximo Node
    }
    return count; // retorna tamanhoda lista
}

struct Node* addLast(struct Node* head, int valor)
{
    struct Node* current = head;
    // gerar Node com 'valor' passado por parametro
    struct Node* last = malloc(sizeof(struct Node));
    last->valor = valor;
    last->next = NULL;

    if(current != NULL)
    {
        while(current->next != NULL)
            {
            current = current->next; // percorre lista
        }
        current->next = last; // adiciona Node no fim da lista
        return head;
    }
    else{
        // se current == NULL entao nao existe nenhum Node
        // logo 'last' � retornado pois passa a ser o primeiro da lista
	return last;
    }
}

void toString(struct Node* head)
{
    struct Node* current = head; // Node tempor�rio
    printf("Lista: \n");
    while(current != NULL){
        printf("%d -> ", current->valor);
        current = current->next; // pr�ximo Node
    }
    printf("NULL \n");   // fim da lista
}


struct Node* deleteLast(struct Node* head)
{
    if (head->next == NULL)
        {
        // se lista tem 1 elemento
        free(head);
        return NULL;
    }
    else
    {
        struct Node* current = head;
        int count = 1;
        while (count < (length(head) - 1))
        {
            // current->next->next != NULL
            current = current->next;
            count++;
        }
        free(current->next);
        current->next = NULL; // condi�ao de fim de lista
	return head;
    }
}



struct  Node* addHead (struct Node* head, int data)
{
    struct  Node* newHead = malloc( sizeof(struct Node));

    newHead->valor = data;
    newHead->next = NULL;

    newHead->next = head;
    head = newHead;

    return head;
};

struct  Node* add (struct Node* head, int novo_valor, int position)
{
    struct Node* temp = head;
    struct Node* newNode = malloc (sizeof(struct Node));


    newNode->valor = novo_valor;

    for(int i=2; i < position; i++)
    {
        if(temp->next != NULL)
        {
            temp = temp->next;
        }

    }

    newNode->next = temp->next;

    temp->next = newNode;

    return temp;
};


struct  Node* deleteHead (struct Node* head)
{
    struct Node* delHead;

    if(head == NULL)
    {
        return NULL;
    }

        delHead = head;
        head = head->next;

        return head;

};

struct  Node* deleteNode(struct Node* head, int position)
{
    struct Node* current = head;
    struct Node* aux = malloc (sizeof(struct Node));

    int count = 1;

    if (count != NULL)
    {
        while (current->next != NULL)
        {
            if(count == position)
            {
                aux = current->next;
                current->valor = aux->valor;
                current->next =aux->next;
                return head;
            }
            current =current->next;
            if (current->next->next == NULL)
            {
                current->next = NULL;
                return head;
            }
            count++;
        }

    }
};

int main()
{
    // aloca espa�o para ponteiro do tipo node
    struct Node* head = malloc(sizeof(struct Node));
    struct Node* second = malloc(sizeof(struct Node));
    struct Node* third = malloc(sizeof(struct Node));

    head->valor = 12; // valor do primeiro n�
    head->next = second; // referencia para segundo n�

    second->valor = 99;
    second->next = third;

    third->valor = 37;
    // neste caso, NULL identifica o fim da lista
    third->next = NULL;

    printf("Lista:\n");
    printf("|%d| o --> ", head->valor);
    printf("|%d| o --> ", second->valor);
    printf("|%d| o --> NULL", third->valor);

    head = addLast(head, 4);
    toString(head);
    printf("\nTamanho da lista = %d\n", length(head));

    head = deleteLast(head);
    toString(head);


    head = deleteHead(head);
    toString(head);

    int headValue;
    printf("qual e novo valor inicial do node:");
    scanf("%d", &headValue);
    head =addHead(head, headValue);
    toString(head);


    printf("\n");

    int nodeValue;
    printf("o valor do node a inserir:");
    scanf("%d", &nodeValue);


    int position;
    printf("qual e a posicao do node a inserir:");
    scanf("%d", &position);
    head= add(head, nodeValue, position);
    toString(head);

    printf("\n");

    int location;
    printf("Node a retirar");
    scanf("%d", &location);
    head = deleteNode(head, location);
    toString(head);


    return 0;
}
