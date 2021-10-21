#pragma once
namespace personAdministration {
    struct Node {
        // 21-10-2021 09.58
        int data;
        Node* left;
        Node* right;
    };
    class BinaryTree {
        // 21-10-2021 09.58
    private:
        struct Node* root;
    public:
        // Constructors
        // Default constructor
        BinaryTree();
        // Handle creation and insertion
        Node* getRoot();
        int setRoot(Node* ptr);
        Node* createNode(int);
        Node* insertNode(Node*, int);
        // Traversing
        int inOrderTraversing(Node*);
        int preOrderTraversing(Node*);
        int postOrderTraversing(Node*);
        //Node* findMinimum(Node*);
        // Deletion
        //Node* deleteNode(Node*, int);
        //
    };
}