/** 
 * Implement linked list via C language
 *
 * 20210605
 *
 *
 *
 */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H


/* linkedlist node */
typedef struct linknode
{
    int value;
    struct linknode *next;
} linknode;

/* linked list operation */

/* init a linkedlist */
linknode* init();

/* insert a node */
void insert_node(linknode *head, int value);

/* delete a node */
void delete_node(linknode *node);

/* destroy a linkedlist */
void destroy(linknode *head);

#endif
