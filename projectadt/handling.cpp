#include "textuserinterface.h"
#include "handling.h"
#include "patient.h"
// Standard library headers
#include <iostream>
#include <vector>
// Declare and initialize a vector of patient objects. 
// Vector becomes the List ADT set of elements, or the list ADT container
std::vector<patientAdministration::patient> patientContainer{};
// IMPORTANT! patientContainer becomes global for this cpp file!
// IMPORTANT! Global variables are bad practice, but in this case it serves a purpose!
int showListADTOptions() {
    // 01-10-2021 11.38
    std::cout << "1. LIST ADT with vector" << std::endl;
    std::cout << "2. #" << std::endl;
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
			std::cout << "Not done yet" << std::endl;
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
	// 01-10-2021 10.58
	int appAction = 0;
	// Fill patientContainer vector witht patient elements
	appAction = fillPatientContainer();
	// Travers patientContainer vector without an iterator and print patientId
	for (unsigned int i = 0; i < patientContainer.size(); i++) {
		std::cout << patientContainer[i].returnPatientId()<< std::endl;
	}
	return 0;
}
int fillPatientContainer() {
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
	patientContainer.push_back(patAAA);
	patientInformation.clear();
	// Create a patient object
	patientInformation.push_back("011200-RRRR");
	patientInformation.push_back("Blue Rose");
	patientInformation.push_back("Carrot Street 6");
	patientInformation.push_back("01-10-2021 06.25");
	patientInformation.push_back("N/A");
	patientInformation.push_back("Emergency Department");
	patientAdministration::patient patAAB(patientInformation);
	patientContainer.push_back(patAAB);
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
	patientContainer.push_back(patAAC);
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
	patientContainer.push_back(patAAD);
	// Clean up
	patientInformation.clear();
	//
	return 0;
}