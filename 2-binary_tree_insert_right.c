#include "binary_trees.h"

/**
 * binary_tree_insert_right- insert to the right of a node
 * @parent: parent node to insert
 * @value: value of the new node
 * Return: return address of new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	if (parent->right == NULL)
	{
		parent->right = new;
		new->parent = parent;
	}
	else
	{
		temp = parent->right;
		parent->right = new;
		new->parent = parent;
		new->right = temp;
		temp->parent = new;
	}
	return (new);
}
