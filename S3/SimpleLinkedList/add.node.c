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
