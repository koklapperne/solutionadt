#pragma once
namespace personAdministration {
    struct Node {
        // 21-10-2021 09.58
        int data;
        // Recursive declarations with struct. Left and right are pointers to nodes!
        // IMPORTANT! Recursive declarations with struct are only possible by using pointers!
        Node* left;
        Node* right;
    };
    class BinaryTree {
        // 21-10-2021 09.58
    private:
        Node* root;
    public:
        // Constructors
        // Default constructor
        BinaryTree();
        // Handle creation and insertion
        Node* getRoot();
        int setRoot(Node* ptr);
        Node* createNode(int n);
        Node* insertNode(Node* rootPtr, int n);
        // Handle traversing
        int inOrderTraversing(Node* root);
        int preOrderTraversing(Node* root);
        int postOrderTraversing(Node* root);
        // Handle searching
        Node* findMinimum(Node* rootPtr);
        Node* findMaximum(Node* rootPtr);
        // Handle deletion
        Node* deleteNode(Node* rootPtr, int n);
        //
    };
}