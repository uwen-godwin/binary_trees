#include "binary_trees.h"

/**
 * binary_tree_is_root - Check for root node
 *
 * @node: Pointer to te node to check
 * Return: Root node on success
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
