/*
* Create a new node containing the value @value.
*
* @value: value stored in the node
* @return: returns the pointer to the newly created node, or NULL if an error occured.
*/
node_t *init_node(int value)
{
     node_t *toadd = (node_t *) malloc(sizeof(node_t));
     if (toadd == NULL)
     {
         return NULL;
     }
     toadd->value = value;
     toadd->next = NULL;
     return toadd;
}

/*
* Add a node at the head of the list @list and increment the number of nodes in the list (member `size`)
*
* @l: linked list
* @value: value to add to the list
*
* @return: 0 if success, 1 otherwise
*/
int add_node(list_t *list, int value)
{
     node_t *toadd = init_node(value);
     if (toadd == NULL || list == NULL)
     {
         return EXIT_FAILURE;
     }
     toadd->next = list->first;
     list->first = toadd;
     list->size++;
     return EXIT_SUCCESS;
}
