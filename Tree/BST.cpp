#include <iostream>
#include <vector>

// Define the structure for each tree node
struct Node
{
    int val;
    Node *left;
    Node *right;

    // Constructor to easily create new nodes
    Node(int key)
    {
        val = key;
        left = nullptr;
        right = nullptr;
    }
};

// Recursive function to insert a new key into the BST
Node *insert(Node *root, int key)
{
    // If the tree/subtree is empty, return a new node
    if (root == nullptr)
    {
        return new Node(key);
    }

    // Otherwise, travel down the tree
    if (key < root->val)
    {
        root->left = insert(root->left, key);
    }
    else
    {
        root->right = insert(root->right, key);
    }

    return root;
}

// Optional helper function to print the tree (In-order traversal: Left, Root, Right)
void printInOrder(Node *root)
{
    if (root == nullptr)
        return;
    printInOrder(root->left);
    std::cout << root->val << " ";
    printInOrder(root->right);
}

int main()
{
    std::vector<int> numbers = {15, 10, 20, 8, 12};
    Node *root = nullptr;

    // Build the tree
    for (int num : numbers)
    {
        root = insert(root, num);
    }

    // Output elements (In-order traversal of a BST always yields sorted data)
    std::cout << "In-order traversal of the built tree: ";
    printInOrder(root);
    std::cout << std::endl;

    return 0;
}
