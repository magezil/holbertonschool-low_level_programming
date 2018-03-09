# 0x1C-binary_trees

## Binary Trees
### 0-binary_tree_node.c
* Create a binary tree node
* Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`

### 1-binary_tree_insert_left.c
* Create a new node and insert as left-child
  * If parent already has a left-child, new node inherits left-child
* Prototype: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`

### 2-binary_tree_insert_right.c
* Create a new node and insert as right-child
  * If parent already has a right-child, new node inherits right-child
* Prototype: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`

### 3-binary_tree_delete.c
* Delete tree
* Prototype: `void binary_tree_delete(binary_tree_t *tree);`

### 4-binary_tree_is_leaf.c
* Check if node is a leaf (no children)
* Prototype: `int binary_tree_is_leaf(const binary_tree_t *node);`

### 5-binary_tree_is_root.c
* Check if given node is a root (no parent)
* Prototype: `int binary_tree_is_root(const binary_tree_t *node);`

### 6-binary_tree_preorder.c
* Use pre-order traversal to go through tree and use given function on nodes
* Prototype: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`

### 7-binary_tree_inorder.c
* Go through binary tree using in-order traversal and perform given function on nodes
* Prototype: `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`

### 8-binary_tree_postorder.c
* Use post-order transversal to go through binary tree and use given function on nodes
* Prototype: `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`

### 9-binary_tree_height.c
* Measures height of binary tree
* Prototype: `size_t binary_tree_height(const binary_tree_t *tree);`

### 10-binary_tree_depth.c
* Measures the depth of a node in a binary tree
* Prototype: `size_t binary_tree_depth(const binary_tree_t *node);`

### 11-binary_tree_size.c
* Measures the size of the tree
* Prototype: `size_t binary_tree_size(const binary_tree_t *tree);`

### 12-binary_tree_leaves.c
* Counts number of leaves in binary tree
* Prototype: `size_t binary_tree_leaves(const binary_tree_t *tree);`

### 13-binary_tree_nodes.c
* Count number of nodes with at least 1 child
* Prototype: `size_t binary_tree_nodes(const binary_tree_t *tree);`

### 14-binary_tree_balance.c
* Calculate balance factor of tree
* Prototype: `int binary_tree_balance(const binary_tree_t *tree);`

### 15-binary_tree_is_full.c
* Check if binary tree is full (all nodes either have 0 or 2 nodes)
* Prototype: `int binary_tree_is_full(const binary_tree_t *tree);`

### 16-binary_tree_is_perfect.c
* Check if binary tree is perfect (fully filled)
* Prototype: `int binary_tree_is_perfect(const binary_tree_t *tree);`

### 17-binary_tree_sibling.c
* Find the sibling of a node
* Prototype: `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`

### 18-binary_tree_uncle.c
* Find the uncle of a node
* Prototype: `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`

### 100-binary_trees_ancestor.c
* Find lowest common ancestor of two nodes
* Prototype: `binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);`

### 101-binary_tree_levelorder.c
* Traverses through tree using level order traversal
* Prototype: `void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));`

### 102-binary_tree_is_complete.c
* Checks if binary tree is complete
* Prototype: `int binary_tree_is_complete(const binary_tree_t *tree);`

### 103-binary_tree_rotate_left.c
* Rotate tree to the left
* Prototype: `binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);`

### 104-binary_tree_rotate_right.c
* Rotate tree to the right
* Prototype: `binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);`

### 110-binary_tree_is_bst.c
* Check if binary tree is a valid Binary Search Tree
* Prototype: `int binary_tree_is_bst(const binary_tree_t *tree);`

### 111-bst_insert.c
* Inserts a value into a Binary Search Tree
* Prototype: `bst_t *bst_insert(bst_t **tree, int value);`

### 112-array_to_bst.c
* Convert an array to a Binary Search Tree
* Prototype: `bst_t *array_to_bst(int *array, size_t size);`

### 113-bst_search.c
* Search for a value in a Binary Search Tree
* Prototype: `bst_t *bst_search(const bst_t *tree, int value);`

### 114-bst_remove.c
* Removes a node from a BST
* Prototype: `bst_t *bst_remove(bst_t *root, int value);`

### 115-O
* Lists average time complexities for inserting a node with the value n, removing a node with value n, and searching for a node in a BST of size n

### 130-binary_tree_is_heap.c
* Checks if binary tree is a Max Binary Heap
* Prototype: `int binary_tree_is_heap(const binary_tree_t *tree);`

### 131-heap_insert.c
* Insert a value into Max Binary Heap
* Prototype: `heap_t *heap_insert(heap_t **root, int value);`

### 120-binary_tree_is_avl.c
* Check if binary tree is valid AVL Tree
* Prototype: `int binary_tree_is_avl(const binary_tree_t *tree);`

### 121-avl_insert.c
* Insert value in AVL tree
* Prototype: `avl_t *avl_insert(avl_t **tree, int value);`

### 122-array_to_avl.c
* Build an AVL tree from an array
* Prototype: `avl_t *array_to_avl(int *array, size_t size);`

### 123-avl_remove.c
* Remove node from AVL tree
* Prototype: `avl_t *avl_remove(avl_t *root, int value);`

### 124-sorted_array_to_avl.c
* Build an AVL tree from an array
* Prototype: `avl_t *sorted_array_to_avl(int *array, size_t size);`

