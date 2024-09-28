#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Function that deletes an entire tree
 * @tree: Pointer to the root of the tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
return;

/* Recursively delete the left and right subtrees */
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);

/* Free the current node */
free(tree);
}
