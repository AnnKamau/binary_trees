#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 * Return: If an error occurs - NULL.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *cat;

	new = malloc(sizeof(binary_tree_t));
	if (cat == NULL)
		return (NULL);

	cat->n = value;
	cat->parent = parent;
	cat->left = NULL;
	cat->right = NULL;

	return (cat);
}

