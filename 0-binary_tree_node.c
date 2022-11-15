#include "binary_trees.h"

/**
 * binary_tree_node - Function that create a binary tree node
 * @parent: Pointer to the parent of the new node
 * @value: Value of the new node
 * Return: Return pointer to the new node created
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	new->parent = parent;
	return (new);
}
