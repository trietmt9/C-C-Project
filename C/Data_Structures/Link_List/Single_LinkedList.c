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

void delete_a_node_begin(struct node *head)
{
    struct node *ptr = head->link;
    head->link = ptr->link;
    free(ptr);
}

void delete_list_element(struct node *head, uint8_t data)
{
    struct node *ptr = head;
    struct node *temp = head->link;
    while(temp!=NULL)
    {
        if(temp->data == data)
        {
            ptr->link = temp->link;
            free(temp);
            break;
        }
        ptr = temp;
        temp = temp->link;
    }
}

void display_list(struct node *head)
{
    struct node *ptr = head->link;
    while(ptr!=NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->link;
    }
    if(ptr==NULL)
    {
        printf("NULL\n");
    }
}

void free_list(struct node *head)
{
    struct node *ptr = head->link;
    while(ptr!=NULL)
    {
        struct node *temp = ptr;
        ptr = ptr->link;
        free(temp);
    }
    head->link = NULL;
}

int main()
{
    struct node* head = (struct node *) malloc(sizeof(struct node));
    head->data = 0;
    head->link = NULL;
    create_a_node_end(head, 20);
    create_a_node_end(head, 30);
    create_a_node_end(head, 40);
    create_a_node_end(head, 50);
    create_a_node_begin(head, 10);
    create_a_node_begin(head, 100);
    create_a_node_end(head, 60);
    display_list(head);
    delete_list_element(head, 40);
    display_list(head);
    free_list(head);
    display_list(head);
    return 0;
}