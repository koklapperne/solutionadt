#include "binarysearchtree.h"
// Standard library headers
#include <iostream>
// Default constructor
personAdministration::BinaryTree::BinaryTree() {
    // 21-10-2021 14.39
    root = nullptr;
}
// Handle creation and insertion
personAdministration::Node* personAdministration::BinaryTree::getRoot() {
    // 21-10-2021 13.26
    return root;
}
int personAdministration::BinaryTree::setRoot(Node* ptr) {
    // 21-10-2021 14.26
    root = ptr;
    //
    return 0;
}
personAdministration::Node* personAdministration::BinaryTree::createNode(int n) {
    // 21-10-2021 07.55
    // IMPORTANT! Using new allocates memory on the heap for newNode
    Node* newNode = new Node;
    newNode->data = n;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}
personAdministration::Node* personAdministration::BinaryTree::insertNode(Node* rootPtr, int n) {
    // 21-10-2021 07.55
    if (rootPtr == nullptr) {
      return createNode(n);
    }
    if (n < rootPtr->data) {
        rootPtr->left = insertNode(rootPtr->left, n);
    }
    if (n > rootPtr->data) {
        rootPtr->right = insertNode(rootPtr->right, n);
    }
    return rootPtr;
}
// Handle traversing
int personAdministration::BinaryTree::inOrderTraversing(personAdministration::Node* root) {
    // 21-10-2021 11.00
    if (root == nullptr){
    //if (root == NULL) {
        return 0; 
    //  return;
    }
    inOrderTraversing(root->left);
    std::cout << root->data << "\t";
    inOrderTraversing(root->right);
    //
    return 0;
}
int personAdministration::BinaryTree::preOrderTraversing(personAdministration::Node* root) {
    // 21-10-2021 12.35
    if (root == nullptr) {
        return 0;
    }
    std::cout << root->data << "\t";
    preOrderTraversing(root->left);
    preOrderTraversing(root->right);
    //
    return 0;
}
int personAdministration::BinaryTree::postOrderTraversing(Node* root) {
    // 21-10-2021 12.40
    if (root == nullptr) {
        return 0;
    }
    postOrderTraversing(root->left);
    postOrderTraversing(root->right);
    std::cout << root->data << "\t";
    return 0;
}
// Handle searching
personAdministration::Node* personAdministration::BinaryTree::findMinimum(Node* rootPtr) {
    // 22-10-2021 10.13
    while (rootPtr->left != nullptr) {
        rootPtr = rootPtr->left;
    }
    return rootPtr;
}
personAdministration::Node* personAdministration::BinaryTree::findMaximum(Node* rootPtr) {
    // 22-10-2021 10.36
    while (rootPtr->right != nullptr) {
        rootPtr = rootPtr->right;
    }
    return rootPtr;
}
// Handle deletion
personAdministration::Node* personAdministration::BinaryTree::deleteNode(Node* rootPtr, int n) {
    // 22-10-2021 12.58
    // IMPORTANT! This function uses findMinimum, so it needs to be declared after
    // the declaration of findMinimum.
    //*
    // Handle node does not excist
    if (rootPtr == nullptr) {
        std::cout << "Node to be deleted is not present.!" << std::endl;
        return rootPtr;
    }
    // Handle node excist
    // *
    // IMPORTANT! All these nested else if are not undestood yet. Analyse! 
    else if (n < rootPtr->data) {
        rootPtr->left = deleteNode(rootPtr->left, n);
    }
    else if (n > rootPtr->data) {
        rootPtr->right = deleteNode(rootPtr->right, n);
    }
    else {
        if (rootPtr->left == nullptr && rootPtr->right == nullptr) {
            // Handle node is a leaf
            delete rootPtr;
            rootPtr = nullptr;
        }
        else if (root->left == nullptr) {
            // Handle node has one child, left node has no child
            struct Node* temp = rootPtr;
            rootPtr = rootPtr->right;
            delete temp;
        }
        else if (rootPtr->right == nullptr) {
            // Handle node has one child, right node has no child
            struct Node* temp = rootPtr;
            rootPtr = rootPtr->left;
            delete temp;
        }
        else {
            // Handle node has two children
            Node* temp = findMinimum(rootPtr->right);
            rootPtr->data = temp->data;
            rootPtr->left = deleteNode(rootPtr->right, temp->data);
        }
    }

    return rootPtr;
    
}