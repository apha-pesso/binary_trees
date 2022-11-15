#include "binary_trees.h"

/**
 * binary_tree_is_leaf- Chech if a node is a leaf-node
 * @node: Node to check
 * Return: return 1 if leaf and 0 if otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if ((node->left == NULL) && (node->right == NULL))
		return (1);
	else
		return (0);
}
