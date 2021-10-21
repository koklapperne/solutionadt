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
    Node* newNode = new struct Node();
    newNode->data = n;
    //newNode->left = NULL;
    newNode->left = nullptr;
    //newNode->right = NULL;
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