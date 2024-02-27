#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t height = binary_tree_height(tree);
    size_t size = binary_tree_size(tree);
    size_t max_nodes = 1, i;

    for (i = 0; i < height; i++)
        max_nodes = max_nodes * 2;

    return (max_nodes == size);
}