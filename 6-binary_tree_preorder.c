#include "binary_trees.h"
/**
 * binary_tree_preorder - transverse bianry tree in a pre-order manner
 *
 * @tree: Pointer to the root node of the tree
 * @func: Pointer to a function to call for each node
 * Return: Tranversed nodes
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree &&  func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
