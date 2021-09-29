#pragma once
#include <string>
namespace TextUserInterface {
	int writeActionSeperator();
	int writeSelectionHighlighter();
	int writeAppInformation(std::string appTitle, std::string appVersion);
	int presentAppActions();
	int handleUserChoise();
	int preventConsoleClose();
	int pauseApplication();
	int moveCursorToDefaultPosition();
	int resetConsole();
	int loopThroughColors();
}
