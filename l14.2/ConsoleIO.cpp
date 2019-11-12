#include "stdafx.h"
#include "ConsoleIO.h"


std::string ConsoleIO::read() const noexcept {
	std::string text;
	std::getline(std::cin, text);
	text += " ";
	return text;
}

void ConsoleIO::write(std::string text, std::string words) const noexcept {
	std::cout << text << std::endl;
	messages.showAlgoResultOutput();
	std::cout << std::endl << words << std::endl;
}