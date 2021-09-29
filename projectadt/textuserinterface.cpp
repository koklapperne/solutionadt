// Local headers
#include "textuserinterface.h"
// Standard library headers
#include <iostream>
#include <vector>
#include "windows.h"
int TextUserInterface::writeActionSeperator() {
	// 24-06-2021 14.15
	const int numberOfCharcters = 80;
	const char theSeperatorCharacter = '*';
	std::vector<char> theSeperator{};
	for (unsigned int i = 0; i < numberOfCharcters; i++) {
		theSeperator.push_back(theSeperatorCharacter);
	}
	//
	for (unsigned int i = 0; i < theSeperator.size(); i++) {
		std::cout << theSeperatorCharacter;
	}
	//std::cout << std::endl;
	return 0;
}
int TextUserInterface::writeSelectionHighlighter() {
	// 24-09-2021 07.39
	const int numberOfCharcters = 80;
	const char theSeperatorCharacter = '-';
	std::vector<char> theSeperator{};
	for (unsigned int i = 0; i < numberOfCharcters; i++) {
		theSeperator.push_back(theSeperatorCharacter);
	}
	//
	for (unsigned int i = 0; i < theSeperator.size(); i++) {
		std::cout << theSeperatorCharacter;
	}
	return 0;
}
int TextUserInterface::writeAppInformation(std::string appTitle, std::string appVersion) {
	// 13-08-2021 12.14
	const int numberOfCharcters = 80;
	const int centerOfConsol = 40;
	int appAction{};
	int startAt{};
	startAt = (centerOfConsol - (appTitle.length() / 2));
	appAction = 0;
	appAction = TextUserInterface::writeActionSeperator();
	std::cout << std::endl;
	for (int t = 0; t < startAt; t++) {
		std::cout << ' ';
	}
	//std::cout << std::endl;
	std::cout << appTitle << std::endl;
	std::cout << appVersion << std::endl;
	appAction = TextUserInterface::writeActionSeperator();
	//std::cout << std::endl;
	//
	return 0;
}
int TextUserInterface::presentAppActions() {
	// 07-07-2021 13.10
	int choise{};
	int appAction{};
	choise = 0;
	appAction = 0;
	std::cout << "1. Not done yet!" << std::endl;
	std::cout << "2. Not done yet!" << std::endl;
	std::cout << "3. Not done yet!" << std::endl;
	std::cout << "4. Not done yet!" << std::endl;
	appAction = TextUserInterface::writeActionSeperator();
	std::cout << "Enter choise: ";
	std::cin >> choise;
	appAction = TextUserInterface::writeActionSeperator();
	//
	return choise;
}
int TextUserInterface::handleUserChoise() {
	//
	return 0;
}
int TextUserInterface::pauseApplication() {
	// 29-07-2021 15.07
	std::cout << std::endl;
	std::cout << "Pres ENTER to continue: ";
	std::system("pause>0");
	//
	return 0;
}
int TextUserInterface::preventConsoleClose() {
	// 24-09-2021 15.50
	//std::cout << std::endl;
	std::cout << "Press ENTER to end the application: ";
	std::system("pause>0");
	//
	return 0;
}
int TextUserInterface::moveCursorToDefaultPosition() {
	// 30-07-2021 07.39
	// Using ANSI escape sequence
	// Escape sequence seems to work on Linux 
	// This does not seem to work??
	// \033[<L>;<C>f 
	// Puts the cursor at line L and column C.
	// std::cout << "\033[<" << xPos <<">;<" << yPos << ">f";
	// std::printf  ("\033[0;35Here we are\n");
	// std::cout << "\x1b[0m Here we go" << std::endl;
	// Using Windows Console API
	// This works
	int numberOfActions = 8;
	HANDLE  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD activePosition = { 0,5 };
	// Move the cursor
	SetConsoleCursorPosition(hConsole, activePosition);

	// Overwrite with blanks
	for (int i = 0; i = numberOfActions; i++) {
		std::cout << "                                " << std::endl;
	}
	// Move the cursor
	SetConsoleCursorPosition(hConsole, activePosition);
	// std::cout << "Here we go" << std::endl;
	return 0;
}
int TextUserInterface::resetConsole() {
	// 29-07-2021 14.52
	int appAction = 0;
	appAction = pauseApplication();
	std::system("CLS");
	appAction = writeAppInformation("--Abstract datatypes in C++--", "V.00.01");
	//
	return 0;
}
int TextUserInterface::loopThroughColors() {
	// 30-07-2021 07.54
	// color your text in Windows console mode
	// colors are 0=black 1=blue 2=green and so on to 15=white  
	// colorattribute = foreground + background * 16
	// to get red text on yellow use 4 + 14*16 = 228
	// light red on yellow would be 12 + 14*16 = 236
	HANDLE  hConsole;
	int k;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	// you can loop k higher to see more color choices
	for (k = 1; k < 255; k++)
	{
		// pick the colorattribute k you want
		SetConsoleTextAttribute(hConsole, k);
		std::cout << k << " I want to be nice today!" << std::endl;
	}
	//
	return 0;
}