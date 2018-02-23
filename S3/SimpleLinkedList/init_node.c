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
