#include <stdio.h>
#include <stdlib.h>

struct node {
    int dato;
    struct node* next;
};
typedef struct node Node;

Node* CreateNode(int x, Node* link) {

    Node *p;
    p = (Node*)malloc(sizeof(Node));
    p -> dato = x;
    p -> next = link;
    return p;
}

void InsertIntoHead(Node **head, int input) {

    Node* new;
    new = (Node*)malloc(sizeof(Node));
    new -> dato = input;
    new -> next = *head;

    *head = new;
}

int main() {

    Node* head = NULL;

    InsertIntoHead(&head, 11);
    printf("head data: %d\n", head -> dato);

    InsertIntoHead(&head, 6);
    printf("head data: %d\n", head -> dato);
    printf("head next data: %d\n", head -> next -> dato);

    return 0;
}
