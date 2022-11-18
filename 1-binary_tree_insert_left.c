#include "binary_trees.h"

/**
 * binary_tree_insert_left- Insert node at the left of another node
 * @parent: pointer to node to insert to the left
 * @value: Value stored in the new node
 * Return: return address of the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	new = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);
	new->left = NULL;
	new->right = NULL;
	new->n = value;

	if (parent->left == NULL)
	{
		parent->left = new;
		new->parent = parent;
	}
	else
	{
		temp = parent->left;
		parent->left = new;
		new->parent = parent;
		new->left = temp;
		temp->parent = new;
	}
	return (new);
}
