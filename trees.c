#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}Node;

int isEmpty(Node *n)
{
    return n == NULL;
}

int isLeaf(Node *n)
{
    return (n->left == NULL && n->right == NULL);
}

int size(Node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    else
    {
        return(size(n->left) + 1 + size(n->right));
    }
}

int height (Node* node)
{
    if(node == NULL)
    {
        return (0);
    }
    else
    {
         // calcula a profundidade de cada sub-arvore
        int lDepth = height(node->left);
        int rDepth = height(node->right);

        // utiliza a altura maior
        if (lDepth > rDepth)
        {
            return (lDepth + 1);
        }
        else
        {
            return (rDepth + 1);
        }

    }
}

Node* newNode(int data) {
    Node* node = malloc(sizeof(Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}

Node* add(Node* node, int data)
{
    // se arvore vazia, adiciona como No raiz
    if (node == NULL)
    {
        return (newNode(data));
    }
    else
    {
        // senao, adiciona a arvore
        if (data <= node->data)
        {
            node->left = add(node->left, data);
        }
        else
        {
            node->right = add(node->right,data);
        }
    	return (node);
    }
}

Node* delete(Node *node, int data)
{
    Node* buf;

    if (node == NULL)
    {
        return NULL;
    }
    else if (data < node->data)
    {
        node->left = delete(node->left, data);
    }
    else if (data > node->data)
    {
        node->right = delete(node->right, data);
    }
    else
    {
        if (node->left != NULL && node->right != NULL)
        {
            node->data = node->right->data;
            node->right = delete(node->right, node->data);
        }
        else if (node->left == NULL)
        {
            buf = node;
            node = node->right;
            free(buf);
        }
        else if (node->right == NULL)
        {
            buf = node;
            node = node->left;
            free(buf);
        }
    }
    return node;
}

void transverseInfix(Node* root)
{
    if (root == NULL)
    {
        return;
    }
    transverseInfix(root->left);
    printf("%d ", root->data);
    transverseInfix(root->right);
}

int search(Node* node, int data)
{
    if (node == NULL)
    {
        return 0;
    }

    if (data == node->data)
    {
        return 1;
    }
    else if (data < node->data)
    {
        return (search(node->left, data));
    }
    else
    {
        return (search(node->right, data));
    }
}

int main()
{
   Node* root = NULL;
    printf("arvore vazia?");

    if(isEmpty(root) == 1)
    {
        printf("Sim\n");
    }
    else
    {
        printf("Nao");
    }
    root = add(root, 20);
    root = add(root, 10);
    root = add(root, 30);

    if(isEmpty(root) == 1)
    {
        printf("Sim\n");
    }
    else
    {
        printf("Nao");
    }
    printf("tamanho da arvore = %d\n", size(root));
    printf("altura da arvore = %d\n\n", height(root));

    root = add(root, 5);
    root = add(root, 15);
    root = add(root, 1);
    root = add(root, 25);
    root = add(root, 35);
    root = add(root, 40);
    transverseInfix(root);
    root = delete(root, 15);
    printf("\n");
    transverseInfix(root);
    root = delete(root, 1);
    printf("\n");
    transverseInfix(root);
    root = delete(root, 40);
    printf("\n");
    transverseInfix(root);
    root = delete(root, 30);
    printf("\n");
    transverseInfix(root);
}
