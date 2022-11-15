#include "binary_trees.h"

/**
 * binary_tree_is_root- check if a node is a root-node
 * @node: Node to check
 * Return: return 1 if root or return 0 if otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
