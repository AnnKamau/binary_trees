#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 * Return: If no common ancestors return NULL, else return common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *cat, *dog;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	cat = first->parent, dog = second->parent;
	if (first == dog || !cat || (!cat->parent && dog))
		return (binary_trees_ancestor(first, dog));
	else if (cat == second || !dog || (!dog->parent && cat))
		return (binary_trees_ancestor(cat, second));
	return (binary_trees_ancestor(cat, dog));
}

