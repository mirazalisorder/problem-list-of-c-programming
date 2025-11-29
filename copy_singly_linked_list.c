#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void insert(struct Node **head, int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void printList(struct Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

struct Node* copyList(struct Node *head) {
    if (head == NULL) return NULL;
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = head->data;
    newNode->next = copyList(head->next);
    return newNode;
}

int main() {
    struct Node *head = NULL;
    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);

    printf("Original List: ");
    printList(head);

    struct Node *copy = copyList(head);

    printf("Copied List: ");
    printList(copy);

    return 0;
}
