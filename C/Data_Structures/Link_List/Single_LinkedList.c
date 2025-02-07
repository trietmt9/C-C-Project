#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct node
{
    uint8_t data; 
    struct node *link; 
};
void create_a_node_begin(struct node* head, uint8_t data)
{
    struct node *new_node = (struct node *) malloc(sizeof(struct node));
    new_node->data = data;
    new_node->link = head->link;
    head->link = new_node;
}
void create_a_node_end(struct node *head, uint8_t data)
{
    struct node *new_node = (struct node *) malloc(sizeof(struct node));
    new_node->data = data; 
    new_node->link = NULL;
    struct node * ptr = head; 
    while(ptr->link !=NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = new_node;
}

int main()
{
    struct node* head = (struct node *) malloc(sizeof(struct node));
    struct node* current = (struct node*) malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;
    create_a_node_end(head, 20);
    create_a_node_end(head, 30);
    create_a_node_end(head, 40);
    create_a_node_end(head, 50);
    create_a_node_begin(head, 10);

    current = head;
    while(current!=NULL)
    {   
        
        printf("Data: %d | Current Address: %p| Next Address: %p\n", current->data, current, current->link);
        // printf("Data: %d | Next Address: %p\n", head->data, head->link);
        current = current->link;
        // head = head->link;
        
    }
    return 0;
}