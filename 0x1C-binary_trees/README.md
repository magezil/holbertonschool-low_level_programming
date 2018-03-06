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

