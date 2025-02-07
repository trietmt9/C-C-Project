#include <stdio.h>
#include <stdlib.h>

typedef struct node_t {
    int data;
    struct node_t *link;
} node_t;

node_t *create_node(int data) {
    node_t *new_node = malloc(sizeof(node_t));
    if (!new_node) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    new_node->data = data;
    new_node->link = NULL;
    return new_node;
}

void print_list(node_t *head) {
    node_t *current = head;
    while (current) {
        printf("Data: %d | Node Address: %p | Next Address: %p\n",
               current->data, (void *)current, (void *)current->link);
        current = current->link;
    }
}

void free_list(node_t *head) {
    node_t *current = head;
    while (current) {
        node_t *temp = current;
        current = current->link;
        free(temp);
    }
}

int main() {
    node_t *head = create_node(10);
    head->link = create_node(20);
    head->link->link = create_node(30);
    head->link->link->link = create_node(40);

    print_list(head);
    free_list(head);

    return 0;
}