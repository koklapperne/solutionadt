// 29-09-2021 13.03
// Local headers
#include "textuserinterface.h"
#include "handling.h"
// Standard library headers
#include <iostream>
int showUserOptions() {
    // 24-09-2021 15.30
    std::cout << "1. LIST ADT" << std::endl;
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
int handleUserOptions() {
	// 10-08-2021 13.26
	int appAction = 0;
	int choise = 99;
	bool stop = false;
	// Operations on protocols
	while (stop == false) {
		appAction = showUserOptions();
		std::cout << "Enter choise: ";
		std::cin >> choise;
		appAction = TextUserInterface::writeActionSeperator();
		switch (choise) {
		case 1:
			appAction = handleListADTOptions();
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
int main()
{
    // 29-09-2021 12.24
    // Application entry point
	int appAction = 0;
	//
	appAction = TextUserInterface::writeAppInformation("--Abstract data types in C++--", "V.00.01");
	//
	appAction = handleUserOptions();
	appAction = TextUserInterface::preventConsoleClose();
	//
	return 0;
}

