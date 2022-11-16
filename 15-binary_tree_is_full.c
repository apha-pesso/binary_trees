#include "binary_trees.h"

/**
 * binary_tree_is_full- checks if a binary tree is full
 * @tree: root node of the tree
 * Return: return 1 if tree is full or 0 if otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((!tree->left) && (!tree->right))
			return (1);
		if ((tree->left) && (tree->right))
		{
			return (binary_tree_is_full(tree->left) &&
					binary_tree_is_full(tree->right));
		}
		else
			return (0);
	}
	return (0);
}
