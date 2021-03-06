#include "textuserinterface.h"
#include "handling.h"
#include "patient.h"
#include "organization.h"
#include "binarysearchtree.h"
// Standard library headers
#include <iostream>
#include <vector>
#include <list>
// *
// IMPORTANT! Global variables are bad practice, but in this case it serves a purpose!
// *
// Declare and initialize a vector of patient objects. 
// patientVectorContainer becomes the List ADT set of patient elements, or the list ADT container
std::vector<patientAdministration::patient> patientVectorContainer{};
// Declare and initialize a list of patient objects. 
// patientListContainer becomes the List ADT set of patient elements, or the list ADT container
std::list<patientAdministration::patient> patientListContainer{};
// Declare and initialize a list of hospital objects. 
// hospitalTreeContainer becomes the tree ADT set of department elements, or the tree ADT container
organizationAdministration::hospital hospitalTreeContainer{};
// Declare and initialize a binary tree of unique integers
// binaryTreeContainer becomes the binary tree ADT set of unique integers, or the binary tree ADT container
personAdministration::BinaryTree treeOfUniqueIntegers;
// Declare and initialize a list of patient objects. 
// patientListContainer becomes the List ADT set of patient elements, or the list ADT container
std::vector<patientAdministration::patient> patientListOfUniqueNames{};
// List ADT
int showListADTOptions() {
    // 01-10-2021 11.38
    std::cout << "1. List ADT with vector" << std::endl;
    std::cout << "2. List ADT with list" << std::endl;
    std::cout << "3. #" << std::endl;
    std::cout << "4. #" << std::endl;
    std::cout << "5. #" << std::endl;
    std::cout << "6. #" << std::endl;
    std::cout << "7. #" << std::endl;
    std::cout << "8. #" << std::endl;
    std::cout << "9. #" << std::endl;
    std::cout << "0. Exit" << std::endl;
    TextUserInterface::writeActionSeperator();
    //
    return 0;
}
int handleListADTOptions() {
	// 01-10-2021 11.40
	int appAction = 0;
	int choise = 99;
	bool stop = false;
	// Operations on protocols
	while (stop == false) {
		appAction = showListADTOptions();
		std::cout << "Enter choise: ";
		std::cin >> choise;
		appAction = TextUserInterface::writeActionSeperator();
		switch (choise) {
		case 1:
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = handleListADTWithVector();
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 2:
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = handleListADTWithList();
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 3:
			appAction = TextUserInterface::writeSelectionHighlighter();
			std::cout << "Not done yet" << std::endl;
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 4:
			appAction = TextUserInterface::writeSelectionHighlighter();
			std::cout << "Not done yet" << std::endl;
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 5:
			appAction = TextUserInterface::writeSelectionHighlighter();
			std::cout << "Not done yet" << std::endl;
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 6:
			appAction = TextUserInterface::writeSelectionHighlighter();
			std::cout << "Not done yet" << std::endl;
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 7:
			appAction = TextUserInterface::writeSelectionHighlighter();
			std::cout << "Not done yet" << std::endl;
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 8:
			appAction = TextUserInterface::writeSelectionHighlighter();
			std::cout << "Not done yet" << std::endl;
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 9:
			appAction = TextUserInterface::writeSelectionHighlighter();
			std::cout << "Not done yet" << std::endl;
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 0:
			stop = true;
			break;
		default:
			stop = true;
			break;

		}

	}
	//
	return 0;
}
int handleListADTWithVector() {
	// 07-10-2021 10.58
	int appAction = 0;
	// Fill patientVectorContainer witht patient elements
	std::cout << "Vector of objects:" << std::endl;
	appAction = fillPatientVectorContainer();
	// Travers patientVectorContainer without an iterator
	std::cout << "Print without an iterator:" << std::endl;
	for (unsigned int i = 0; i < patientVectorContainer.size(); i++) {
		std::cout << patientVectorContainer[i].returnPatientId()<< std::endl;
	}
	// Declaring an iterator
	std::vector<patientAdministration::patient>::iterator i;
	//
	std::cout << "Print with an iterator:" << std::endl;
	// Travers patientVectorContainer using iterator
	// i is used as an input iterator to read each element in patientContainer and 
	// call one of its public data member functions: returnPatientId()
	for (i = patientVectorContainer.begin(); i != patientVectorContainer.end(); i++) {
		std::cout << (*i).returnPatientId() << std::endl;
	}
	std::cout << "Update with an iterator:" << std::endl;
	// Travers patientVectorContainer using iterator
	// i is used as an output iterator to inspect each element in patientVectorContainer 
	// and update it
	for (i = patientVectorContainer.begin(); i != patientVectorContainer.end(); i++) {
		(*i).updateDateDischarge("03-10-2021");
	}
	std::cout << "Print with an iterator:" << std::endl;
	// Travers patientVectorContainer using iterator
	for (i = patientVectorContainer.begin(); i != patientVectorContainer.end(); i++) {
		std::cout << (*i).returnDateDischarge() << std::endl;
	}
	//
	return 0;
}
int handleListADTWithVectorString() {
	// 07-10-2021 10.35
	// Deprecated, do not delete!
	std::cout << "Vector of strings:" << std::endl;
	// Declaring and initializing a vector
	std::vector<std::string> flowerNames = { "Anemone","Bougainvillea","Broom", "Clematis","Dahlia","Hyacinth","Lavender","Lilac","Lupine","Narcissus" };
	// Declaring an iterator
	std::vector<std::string>::iterator j;
	std::cout << "Print with an iterator:" << std::endl;
	// Travers flowerNames using iterator
	// j is used as an input iterator to inspect each element in flowerNames 
	for (j = flowerNames.begin(); j != flowerNames.end(); j++) {
		std::cout << (*j) << std::endl;
	}
	std::cout << "Updating with an iterator:" << std::endl;
	// Travers flowerNames using iterator
	// j is used as an output iterator to inspect each element in flowerNames and update them
	for (j = flowerNames.begin(); j != flowerNames.end(); j++) {
		(*j) = "Tulip";
	}
	std::cout << "Print with an iterator:" << std::endl;
	// Travers flowerNames using iterator
	for (j = flowerNames.begin(); j != flowerNames.end(); j++) {
		std::cout << (*j) << std::endl;
	}
	return 0;
}
int handleListADTWithList() {
	// 07-10-2021 08.07
	int appAction = 0;
	// Fill patientListContainer witht patient elements
	appAction = fillPatientListContainer();
	// Travers patientVectorContainer without an iterator
	std::cout << "Print without an iterator:" << std::endl;
	std::cout << "Not supported" << std::endl;
	// Declaring an iterator
	std::list<patientAdministration::patient>::iterator i;
	std::cout << "Print with an iterator, forward:" << std::endl;
	// Forward travers patientListContainer using iterator, forward iterator
	// i is used as an input iterator to read each element in patientListContainer and 
	// call one of its public data member functions: returnPatientId()
	for (i = patientListContainer.begin(); i != patientListContainer.end(); i++) {
		std::cout << (*i).returnPatientId() << std::endl;
	}
	std::cout << "Print with an iterator, backward:" << std::endl;
	// Backward travers patientListContainer using iterator, forward + backward = bidirectional iterator
	// i is used as an input iterator to read each element in patientListContainer and 
	// call one of its public data member functions: returnPatientId(). 
	for (i = patientListContainer.end(); i != patientListContainer.begin(); i--) {
		if (i != patientListContainer.end()) {
			std::cout << (*i).returnPatientId() << std::endl;
		}
	}
	std::cout << "Update with an iterator:" << std::endl;
	// Travers patientListContainer using iterator
	// i is used as an output iterator to inspect each element in patientListContainer 
	// and update it
	for (i = patientListContainer.begin(); i != patientListContainer.end(); i++) {
		(*i).updateDateDischarge("03-10-2021");
	}
	std::cout << "Print with an iterator:" << std::endl;
	// Travers patientListContainer using iterator
	// i is used as an input iterator to read each element in patientListContainer and 
	// call one of its public data member functions: returnPatientId()
	for (i = patientListContainer.begin(); i != patientListContainer.end(); i++) {
		std::cout << (*i).returnDateDischarge() << std::endl;
	}
	//
	return 0;
}
int fillPatientVectorContainer() {
	// 01-10-2021 13.07
	// Declare and initialize a vector of strings to hold patient information
	// IMPORTANT! push_back serves as an ADT function to add an element to the container
	// IMPORTANT! patientInformation and all pat... objects are destroyed when this function
	// goes out of scope, but patientContainer holds all objects untill handling.cpp goes out of 
	// scope!
	std::vector<std::string> patientInformation{};
	// Create a patient object
	patientInformation.push_back("011299-QQQQ");
	patientInformation.push_back("Red Tulip");
	patientInformation.push_back("Cabbage Road 45");
	patientInformation.push_back("01-10-2021 12.25");
	patientInformation.push_back("N/A");
	patientInformation.push_back("Emergency Department");
	patientAdministration::patient patAAA(patientInformation);
	patientVectorContainer.push_back(patAAA);
	patientInformation.clear();
	// Create a patient object
	patientInformation.push_back("011200-RRRR");
	patientInformation.push_back("Blue Rose");
	patientInformation.push_back("Carrot Street 6");
	patientInformation.push_back("01-10-2021 06.25");
	patientInformation.push_back("N/A");
	patientInformation.push_back("Emergency Department");
	patientAdministration::patient patAAB(patientInformation);
	patientVectorContainer.push_back(patAAB);
	// Clean up
	patientInformation.clear();
	// Create a patient object
	patientInformation.push_back("310190-NNNN");
	patientInformation.push_back("Black Orchid");
	patientInformation.push_back("Onion Street 600");
	patientInformation.push_back("01-01-2021 13.00");
	patientInformation.push_back("N/A");
	patientInformation.push_back("Emergency Department");
	patientAdministration::patient patAAC(patientInformation);
	patientVectorContainer.push_back(patAAC);
	// Clean up
	patientInformation.clear();
	// Create a patient object
	patientInformation.push_back("220620-PPPP");
	patientInformation.push_back("Yellow Hyacinth");
	patientInformation.push_back("Carrot Street 232");
	patientInformation.push_back("03-08-2021 11.00");
	patientInformation.push_back("N/A");
	patientInformation.push_back("Emergency Department");
	patientAdministration::patient patAAD(patientInformation);
	patientVectorContainer.push_back(patAAD);
	// Clean up
	patientInformation.clear();
	// Create a patient object
	patientInformation.push_back("101245-AAAA");
	patientInformation.push_back("Yellow Orchid");
	patientInformation.push_back("Potatoe Street 2");
	patientInformation.push_back("03-10-2021 06.45");
	patientInformation.push_back("N/A");
	patientInformation.push_back("Emergency Department");
	patientAdministration::patient patAAE(patientInformation);
	patientVectorContainer.push_back(patAAE);
	// Clean up
	patientInformation.clear();
	//
	return 0;
}
int fillPatientListContainer() {
	// 04-10-2021 14.13
	// IMPORTANT! patientInformation and all pat... objects are destroyed when this function
	// goes out of scope, but patientContainer holds all objects until handling.cpp goes out of scope!
	std::vector<std::string> patientInformation{};
	// Declaring and initializing a vector with patient identifiers
	std::vector<std::string> patientIdentifiers = { "011129-QQQQ","030566-WWWW","040622-EEEE","070655-FFFF","060133-TTTT","010499-YYYY","080922-UUUU","070499-IIII","010233-OOOO","060411-PPPP" };
	// Declaring and initializing a vector With flower names
	std::vector<std::string> flowerNames = { "Anemone","Bougainvillea","Broom", "Clematis","Dahlia","Hyacinth","Lavender","Lilac","Lupine","Narcissus" };
	// Declaring and initializing a vector With vegetable names
	std::vector<std::string> vegetableNames = { "Artichokes","Asparagus","Bean","Broccoli","Cabbage","Carrot","Cucumber","Kale","Kohlrabi","Pumpkin" };
	// Declaring and initializing a vector With color names
	std::vector<std::string> colorNames = { "Red","Pink","Orange","Yellow","Purple","Green","Blue","Brown","Cyan","Lime"};
	//
	std::string patientName = "*";
	std::string patientAddress = "*";
	// Declare and initialize aPatient object by calling the default constructor, no parameters
	patientAdministration::patient aPatient;
	// Create 10 patient objects and add them to patientListContainer
	for (unsigned int i = 0; i < 10; i++) {
		patientInformation.push_back(patientIdentifiers[i]);
		patientName = flowerNames[i] + vegetableNames[i];
		patientInformation.push_back(patientName);
		patientAddress = colorNames[i] + " " + "Road" + "645";
		patientInformation.push_back(patientAddress);
		patientInformation.push_back("01-10-2021 12.25");
		patientInformation.push_back("N/A");
		patientInformation.push_back("Emergency Department");
		// Add aPatient to patientListContainer and clear patientInformation 
		aPatient.updatePatient(patientInformation);
		patientListContainer.push_back(aPatient);
		patientInformation.clear();
	}
	return 0;
}
// Tree ADT
int showTreeADTOptions() {
	// 01-10-2021 11.38
	std::cout << "1. Tree ADT with vector" << std::endl;
	std::cout << "2. Binary tree ADT with struct node" << std::endl;
	std::cout << "3. #" << std::endl;
	std::cout << "4. #" << std::endl;
	std::cout << "5. #" << std::endl;
	std::cout << "6. #" << std::endl;
	std::cout << "7. #" << std::endl;
	std::cout << "8. #" << std::endl;
	std::cout << "9. #" << std::endl;
	std::cout << "0. Exit" << std::endl;
	TextUserInterface::writeActionSeperator();
	//
	return 0;
}
int handleTreeADTOptions() {
	// 18-10-2021 13.40
	int appAction = 0;
	int choise = 99;
	bool stop = false;
	// Operations on protocols
	while (stop == false) {
		appAction = showTreeADTOptions();
		std::cout << "Enter choise: ";
		std::cin >> choise;
		appAction = TextUserInterface::writeActionSeperator();
		switch (choise) {
		case 1:
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = handleTreeADT();
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 2:
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = handleBinarySearchTreeADT();
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 3:
			appAction = TextUserInterface::writeSelectionHighlighter();
			std::cout << "Not done yet" << std::endl;
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 4:
			appAction = TextUserInterface::writeSelectionHighlighter();
			std::cout << "Not done yet" << std::endl;
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 5:
			appAction = TextUserInterface::writeSelectionHighlighter();
			std::cout << "Not done yet" << std::endl;
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 6:
			appAction = TextUserInterface::writeSelectionHighlighter();
			std::cout << "Not done yet" << std::endl;
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 7:
			appAction = TextUserInterface::writeSelectionHighlighter();
			std::cout << "Not done yet" << std::endl;
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 8:
			appAction = TextUserInterface::writeSelectionHighlighter();
			std::cout << "Not done yet" << std::endl;
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 9:
			appAction = TextUserInterface::writeSelectionHighlighter();
			std::cout << "Not done yet" << std::endl;
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 0:
			stop = true;
			break;
		default:
			stop = true;
			break;

		}

	}
	//
	return 0;
}
int handleTreeADT() {
	// 18-10-2021 14.20
	int appAction = 0;
	// Fill hospitalTreeContainer witht department elements
	std::cout << "Tree with Vector of objects:" << std::endl;
	appAction = fillHospitalTreeContainer();
	//
	return 0;
}
int fillHospitalTreeContainer() {
// 18-10-2021 12.12
	int appAction = 0;
	// Create a hospital object with one mandatory department object
	std::vector<std::string> hospitalInformation{};
	std::vector<std::string> departmentInformation{};
	// Hospital information
	hospitalInformation.push_back("1516");
	hospitalInformation.push_back("Herlev Gentofte Hospital");
	hospitalInformation.push_back("Borgmester Ib Juuls Vej 1, 2730 Herlev");
	// Department information, first department
	departmentInformation.push_back("151601");
	departmentInformation.push_back("Department Of Anesthesiology");
	departmentInformation.push_back("Borgmester Ib Juuls Vej 1, 2730 Herlev");
	// Create a hospital object with one mandatory department
	organizationAdministration::hospital HEH(hospitalInformation, departmentInformation);
	// Clear departmentInformation
	departmentInformation.clear();
	// Department information, new department
	departmentInformation.push_back("151602");
	departmentInformation.push_back("Department Of Radiology");
	departmentInformation.push_back("Borgmester Ib Juuls Vej 1, 2730 Herlev");
	// Add department to hospital
	appAction = HEH.addHospitalDepartment(departmentInformation);
	// Clear departmentInformation
	departmentInformation.clear();
	// Department information, new department
	departmentInformation.push_back("151604");
	departmentInformation.push_back("Department Of Gynaecology");
	departmentInformation.push_back("Borgmester Ib Juuls Vej 1, 2730 Herlev");
	// Add department to hospital
	appAction = HEH.addHospitalDepartment(departmentInformation);
	// Clear departmentInformation
	departmentInformation.clear();
	// Department information, new department
	departmentInformation.push_back("151607");
	departmentInformation.push_back("Department Of Nuklear Medicine");
	departmentInformation.push_back("Borgmester Ib Juuls Vej 1, 2730 Herlev");
	// Add department to hospital
	appAction = HEH.addHospitalDepartment(departmentInformation);
	// Clear departmentInformation
	departmentInformation.clear();
	// Print all departments
	appAction = HEH.printHospitalDepartments();
//
	return 0;
}
// Binary search tree ADT
int handleBinarySearchTreeADT() {
	// 21-10-2021 07.20
	std::cout << "Binary search Tree with unique integers:" << std::endl;
	int appAction = 0;
	appAction = fillBinarySearchTreeContainer();
	
	return 0;
}
int fillBinarySearchTreeContainer() {
	// 21-10-2021 11.07
	// Declare a node
	personAdministration::Node* ptr;
	personAdministration::Node* minimumPtr;
	personAdministration::Node* maximumPtr;
	personAdministration::Node* nodeToDelete;
	// Inserting
	ptr = treeOfUniqueIntegers.insertNode(treeOfUniqueIntegers.getRoot(), 16);
	treeOfUniqueIntegers.setRoot(ptr);
	ptr = treeOfUniqueIntegers.insertNode(treeOfUniqueIntegers.getRoot(), 60);
	treeOfUniqueIntegers.setRoot(ptr);
	ptr = treeOfUniqueIntegers.insertNode(treeOfUniqueIntegers.getRoot(), 7);
	treeOfUniqueIntegers.setRoot(ptr);
	ptr = treeOfUniqueIntegers.insertNode(treeOfUniqueIntegers.getRoot(), 41);
	treeOfUniqueIntegers.setRoot(ptr);
	ptr = treeOfUniqueIntegers.insertNode(treeOfUniqueIntegers.getRoot(), 90);
	treeOfUniqueIntegers.setRoot(ptr);
	ptr = treeOfUniqueIntegers.insertNode(treeOfUniqueIntegers.getRoot(), 1);
	treeOfUniqueIntegers.setRoot(ptr);
	ptr = treeOfUniqueIntegers.insertNode(treeOfUniqueIntegers.getRoot(), 17);
	treeOfUniqueIntegers.setRoot(ptr);
	// Traversing
	std::cout << "Inorder traversing:" << std::endl;
	treeOfUniqueIntegers.inOrderTraversing(treeOfUniqueIntegers.getRoot());
	std::cout << std::endl;
	std::cout << "Preorder traversing:" << std::endl;
	treeOfUniqueIntegers.preOrderTraversing(treeOfUniqueIntegers.getRoot());
	std::cout << std::endl;
	std::cout << "Postorder traversing:" << std::endl;
	treeOfUniqueIntegers.postOrderTraversing(treeOfUniqueIntegers.getRoot());
	std::cout << std::endl;
	// Searching
	std::cout << "Find minimum:" << std::endl;
	minimumPtr = treeOfUniqueIntegers.findMinimum(ptr);
	std::cout << minimumPtr->data << std::endl;
	std::cout << "Find maximum:" << std::endl;
	maximumPtr = treeOfUniqueIntegers.findMaximum(ptr);
	std::cout << maximumPtr->data << std::endl;
	// Deleting
	std::cout << "Delete node:" << std::endl;
	nodeToDelete = treeOfUniqueIntegers.deleteNode(treeOfUniqueIntegers.getRoot(), 7);
	treeOfUniqueIntegers.setRoot(nodeToDelete);
	treeOfUniqueIntegers.inOrderTraversing(treeOfUniqueIntegers.getRoot());
	std::cout << std::endl;
	// Clean up
	return 0;
}
// Hashing
int showHashingOptions() {
	// 05-04-2022 11.42
	std::cout << "1. Fill test data structure" << std::endl;
	std::cout << "2. Use hash function" << std::endl;
	std::cout << "3. #" << std::endl;
	std::cout << "4. #" << std::endl;
	std::cout << "5. #" << std::endl;
	std::cout << "6. #" << std::endl;
	std::cout << "7. #" << std::endl;
	std::cout << "8. #" << std::endl;
	std::cout << "9. #" << std::endl;
	std::cout << "0. Exit" << std::endl;
	TextUserInterface::writeActionSeperator();
	//
	return 0;
}
int handleHashingOptions() {
	// 05-04-2022 13.40
	int appAction = 0;
	int choise = 99;
	bool stop = false;
	//
	while (stop == false) {
		appAction = showHashingOptions();
		std::cout << "Enter choise: ";
		std::cin >> choise;
		appAction = TextUserInterface::writeActionSeperator();
		switch (choise) {
		case 1:
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = fillHashingTestDataContainer();
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 2:
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = useHashFunction();
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 3:
			appAction = TextUserInterface::writeSelectionHighlighter();
			std::cout << "Not done yet" << std::endl;
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 4:
			appAction = TextUserInterface::writeSelectionHighlighter();
			std::cout << "Not done yet" << std::endl;
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 5:
			appAction = TextUserInterface::writeSelectionHighlighter();
			std::cout << "Not done yet" << std::endl;
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 6:
			appAction = TextUserInterface::writeSelectionHighlighter();
			std::cout << "Not done yet" << std::endl;
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 7:
			appAction = TextUserInterface::writeSelectionHighlighter();
			std::cout << "Not done yet" << std::endl;
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 8:
			appAction = TextUserInterface::writeSelectionHighlighter();
			std::cout << "Not done yet" << std::endl;
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 9:
			appAction = TextUserInterface::writeSelectionHighlighter();
			std::cout << "Not done yet" << std::endl;
			appAction = TextUserInterface::writeSelectionHighlighter();
			appAction = TextUserInterface::writeActionSeperator();
			break;
		case 0:
			stop = true;
			break;
		default:
			stop = true;
			break;

		}

	}
	//
	return 0;
}
int handleHashing() {
	// 05-04-2022 12.24
	std::cout << "Hashing of patient vector ADT with short unique names:" << std::endl;
	int appAction = 0;
	appAction = fillHashingTestDataContainer();
	//
	return 0;
}
int fillHashingTestDataContainer() {
	// 04-04-2022 12.42
	// Declaring and initializing
	std::string patientName = "*";
	std::string patientAddress = "*";
	// Vector for updating a patient object with patient information
	std::vector<std::string> patientInformation{};
	// Declaring and initializing a vector with patient identifiers
	std::vector<std::string> patientIdentifiers = { "011129-QQQQ","030566-WWWW","040622-EEEE","070655-FFFF","060133-TTTT","010499-YYYY","080922-UUUU","070499-IIII","010233-OOOO","060411-PPPP" };
	// vector With patient names
	// IMPORTANT! Must be with unique characters
	std::vector<std::string> patientNames = { "Ada","Bea","Joy","Jan","Hal","Soe","Boy","Zed","Cal","Mia","Tim" };
	// Vector With color names
	std::vector<std::string> colorNames = { "Red","Pink","Orange","Yellow","Purple","Green","Blue","Brown","Cyan","Lime" };
	// Declare and initialize aPatient object by calling the default constructor, no parameters
	patientAdministration::patient aPatient;
	for (unsigned int i = 0; i < 10; i++) {
		patientInformation.push_back(patientIdentifiers[i]);
		patientName = patientNames[i];
		patientInformation.push_back(patientName);
		patientAddress = colorNames[i] + " " + "Road" + "61";
		patientInformation.push_back(patientAddress);
		patientInformation.push_back("04-04-2022 13.17");
		patientInformation.push_back("N/A");
		patientInformation.push_back("Emergency Department");
		// Add aPatient to patientListContainer and clear patientInformation 
		aPatient.updatePatient(patientInformation);
		patientListOfUniqueNames.push_back(aPatient);
		patientInformation.clear();
	}
	//
	std::cout << "Test data structure populated" << std::endl;
	//
	return 0;
}
int hashFunction(std::string uniqueName) {
	// Sum of characters ASCII value MOD number of names!
	// IMPORTANT! To ensure that the hash function is injective, 
	// all names must be composed of unique characters, no names must share
	// all characters!
	// Declarations
	int result;
	char activeCharacter;
	// Initializations
	result = 0;
	activeCharacter = '*';
	// Travers the string
	for (int i = 1; i < 4; i++) {
		activeCharacter = uniqueName[i];
		result = result + (int)activeCharacter;
	}
	//
	return result;
}
int useHashFunction() {
	// 06-04-2022-16.55
	// Declarations
	int calculatedIndex;
	std::string activeName;
	// Initialization
	calculatedIndex = 0;
	activeName = "*";
	//
	activeName = patientListOfUniqueNames[2].returnPatientName();
	calculatedIndex = hashFunction(activeName);
	std::cout << "calculatedIndex: " << calculatedIndex << std::endl;
	// 
	return 0;
}