#include "binary_trees.h"

/**
 * binary_tree_depth- Measures the depth of a node
 * @tree: address of node whose depth is to be measured
 * Return: return the depth of the node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
	{
		size_t l_Depth = 0;

		if (tree->parent)
		{
			l_Depth = 1 + binary_tree_depth(tree->parent);
		}
		else
			l_Depth = 0;
		return (l_Depth);
	}
}
