#include "binary_trees.h"

/**
 * binary_tree_uncle- Finds the uncle of a node
 * @node: node whose uncle is to be found
 * Return: return pointer to the address of the uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && (node->parent->parent != NULL))
	{
		binary_tree_t *father, *fore_father;

		father = node->parent;
		fore_father = father->parent;
		if (fore_father->left && fore_father->right)
		{
			if (fore_father->left == father)
				return (fore_father->right);
			else
				return (fore_father->left);
		}
		else
			return (NULL);
	}
	return (NULL);
}
