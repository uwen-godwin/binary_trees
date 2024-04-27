#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: Pointer to the root node
 * Return: Success
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree)
    {
        size_t i = 0, r = 0;

        i = tree->left ? i + binary_tree_height(tree->left) : 0;
        r = tree->right ? i + binary_tree_height(tree->right) : 0;
        return ((i > r) ? i : r);
    }
    return (0);
}
