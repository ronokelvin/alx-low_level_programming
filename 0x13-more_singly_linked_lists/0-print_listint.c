#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 9;
    head->next = NULL;
printf("%d\n",  head->data);
    struct node *current = malloc(sizeof(struct node));
    current->data = 8;
    current->next = NULL;

      printf("%d\n",  current->data);

    return 0;
}

