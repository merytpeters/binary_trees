#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts node as left child
 * @parent: Pointer to the parent node to insert the left child
 * @value: Value to put in the new node
 * Return: Pointer to the new left node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

/* Check if parent is NULL */
if (parent == NULL)
return (NULL);

/* Initialize the new node */
new_node = binary_tree_node(parent, value);
if (new_node == NULL)
return (NULL);

/* Check if parent has a left child and replace it*/
if (parent->left != NULL)
{
/* New node's left child becomes the parent left child*/
new_node->left = parent->left;
parent->left->parent = new_node; /* old left child becomes left child to new node*/
}

parent->left = new_node; /*New node set to left child to the new node*/

return (new_node);

}
