/* Implement linked list via C language */

#include <stdio.h>
#include "linkedlist.h"

/**
 * @function: init a linkedlist, malloc a linkedlist head, value=-1, next=NULL
 *
 * @param: none
 *
 * @return: linknode pointer to the head
 *
 */
linknode* init()
{
    linknode *head = (linknode*)malloc(sizeof(linknode));
    head->value = -1;
    head->next = NULL;
}

/**
 * @function: insert a node in the tail
 *
 * @[param] value: the value of the node, the type is int now
 *
 * @[param] head: the head of the linkedlist
 *
 * @return: none
 */

void insert_node(linknode *head, int value)
{
    if (head == NULL)
    {
        printf("error: the head is nullptr!\n");
        return;
    }

    linknode *p = head;
    while(p->next != NULL)
    {
        p = p->next;
    }

    linknode *node = (linknode*)malloc(sizeof(int));
    node->value = value;
    node->next = NULL;

    p->next = node;
}

/* delete a given node */
void delete_node(linknode *node)
{
    

}

/**
 * function: destory a given linkedlist 
 *
 * @[param] head: the head of linkedlist
 *
 * @return: NULL
 */
void destroy(linknode *head)
{
    while (head->next != NULL)
    {
        linknode *p = head;

        while (p->next != NULL)
        {
            p = p->next;
        }
        free(p);
    }
    
    free(head);
}



