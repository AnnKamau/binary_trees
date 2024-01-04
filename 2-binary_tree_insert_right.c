#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child
 *                            of another in a binary tree.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 * Return: If parent is NULL or an error occurs - NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *cat;

	if (parent == NULL)
		return (NULL);

	cat = binary_tree_node(parent, value);
	if (cat == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		cat->right = parent->right;
		parent->right->parent = cat;
	}
	parent->right = cat;

	return (cat);
}

