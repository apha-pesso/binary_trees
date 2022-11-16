#include "binary_trees.h"

/**
 * binary_tree_sibling- finds sibling of a node
 * @node: node to check
 * Return: Return pointer to sibling or null if no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && (node->parent != NULL))
	{
		binary_tree_t *father;

		father = node->parent;
		if (father->left && father->right)
		{
			if (father->left == node)
				return (father->right);
			else
				return (father->left);
		}
		else
			return (NULL);
	}
	return (NULL);
}
