#include "textuserinterface.h"
#include "handling.h"
#include "patient.h"
// Standard library headers
#include <iostream>
#include <vector>
#include <list>
// IMPORTANT! Global variables are bad practice, but in this case it serves a purpose!
// Declare and initialize a vector of patient objects. 
// patientVectorContainer becomes the List ADT set of elements, or the list ADT container
std::vector<patientAdministration::patient> patientVectorContainer{};
// Declare and initialize a list of patient objects. 
// patientListContainer becomes the List ADT set of elements, or the list ADT container
std::list<patientAdministration::patient> patientListContainer{};
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
	appAction = fillPatientVectorContainer();
	// Travers patientContainer vector without an iterator
	std::cout << "Print without an iterator:" << std::endl;
	for (unsigned int i = 0; i < patientVectorContainer.size(); i++) {
		std::cout << patientVectorContainer[i].returnPatientId()<< std::endl;
	}
	// Declaring an iterator
	std::vector<patientAdministration::patient>::iterator i;
	
	std::cout << "Print with an iterator:" << std::endl;
	// Travers patientContainer using iterator
	// i is used as an input iterator to read each element in patientContainer and 
	// call one of its public data member functions: returnPatientId()
	for (i = patientVectorContainer.begin(); i != patientVectorContainer.end(); i++) {
		std::cout << (*i).returnPatientId() << std::endl;
	}
	std::cout << "Update with an iterator:" << std::endl;
	// Travers patientContainer using iterator
	// i is used as an output iterator to inspect each element in patientContainer 
	// and update it
	for (i = patientVectorContainer.begin(); i != patientVectorContainer.end(); i++) {
		(*i).updateDateDischarge("03-10-2021");
	}
	std::cout << "Print with an iterator:" << std::endl;
	// Travers patientContainer using iterator
	for (i = patientVectorContainer.begin(); i != patientVectorContainer.end(); i++) {
		std::cout << (*i).returnDateDischarge() << std::endl;
	}
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
		(*j)="Tulip";
	}
	std::cout << "Print with an iterator:" << std::endl;
	// Travers flowerNames using iterator
	for (j = flowerNames.begin(); j != flowerNames.end(); j++) {
		std::cout << (*j) << std::endl;
	}
	return 0;
}
int handleListADTWithList() {
	// 03-10-2021 19.00
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
		patientAddress = colorNames[i] + " " + "Road" + "456";
		patientInformation.push_back(patientAddress);
		patientInformation.push_back("01-10-2021 12.25");
		patientInformation.push_back("N/A");
		patientInformation.push_back("Emergency Department");
		// Add aPatient to patientListContainer and clear patientInformation 
		aPatient.updatePatient(patientInformation);
		patientListContainer.push_back(aPatient);
		patientInformation.clear();
	}

	// Declaring and initializing a vector vith patient identifiers
	// Create a patient object
	/*patientInformation.push_back("011299-QQQQ");
	patientInformation.push_back("Red Tulip");
	patientInformation.push_back("Cabbage Road 45");
	patientInformation.push_back("01-10-2021 12.25");
	patientInformation.push_back("N/A");
	patientInformation.push_back("Emergency Department");
	patientAdministration::patient patAAA(patientInformation);
	patientListContainer.push_back(patAAA);
	patientInformation.clear();
	// Create a patient object
	patientInformation.push_back("011200-RRRR");
	patientInformation.push_back("Blue Rose");
	patientInformation.push_back("Carrot Street 6");
	patientInformation.push_back("01-10-2021 06.25");
	patientInformation.push_back("N/A");
	patientInformation.push_back("Emergency Department");
	patientAdministration::patient patAAB(patientInformation);
	patientListContainer.push_back(patAAB);
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
	patientListContainer.push_back(patAAC);
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
	patientListContainer.push_back(patAAD);
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
	patientListContainer.push_back(patAAE);
	// Clean up
	patientInformation.clear();
	//
	*/
	return 0;
}