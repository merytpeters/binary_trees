#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts node as right child
 * @parent: Pointer to the parent node to insert the right child
 * @value: Value to put in the new node
 * Return: Pointer to the new left node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

/* Check if parent is NULL */
if (parent == NULL)
return (NULL);

/* Initialize the new node */
new_node = binary_tree_node(parent, value);
if (new_node == NULL)
return (NULL);

/* Check if parent has a right child and replace it*/
if (parent->right != NULL)
{
/* New node's right child becomes the parent right child*/
new_node->right = parent->right;
/* old right child becomes right child to new node*/
parent->right->parent = new_node;
}

parent->right = new_node; /*New node set to left child to the new node*/

return (new_node);

}
