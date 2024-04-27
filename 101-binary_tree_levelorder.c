#include "binary_trees.h"
#include "queues.h"

/**
 * binary_tree_levelorder - Traverse a binary tree using level-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    queue_t *queue = NULL;
    const binary_tree_t *current;

    queue_push(&queue, (void *)tree);

    while (queue != NULL)
    {
        current = queue->node;
        queue_pop(&queue);
        func(current->n);

        if (current->left != NULL)
            queue_push(&queue, (void *)(current->left));

        if (current->right != NULL)
            queue_push(&queue, (void *)(current->right));
    }
}
