/* test the realized linkedlist */
 
 #include <stdio.h>
 #include <assert.h>
 #include "linkedlist.h"

int main()
{
    /* test init() */
    linknode *p = init();
    printf("head->value: %d\n", p->value);

    /* test insert_node() */
    insert_node(p, 1);
    insert_node(p, 2);
    insert_node(p, 3);
    insert_node(p, 4);
    
    linknode *q = p;
    while (q != NULL)
    {
        printf("%d ", q->value);
        q = q->next;
    }
    printf("\n");

    /* test destroy() */
    destroy(p);
    //assert(p == NULL);

    return 0;
 }
