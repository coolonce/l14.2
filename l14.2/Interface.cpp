#include "stdafx.h"
#include "Interface.h"


void Interface::getMenuItem() const noexcept {

	bool continueUsingProgram = true;
	while (continueUsingProgram) {
		messages.showMenu();
		messages.showMenuInputInvitation();
		int menuItemNumber = utils.correctIntInput(1, 3);
		std::shared_ptr<InOu> io;
		std::shared_ptr<InOu> fio;
		switch (menuItemNumber) {
			case(custom_input): {			
				messages.showTextInputInvitation();
				io = std::make_shared<ConsoleIO>();
				std::string text = io->read();

				std::string countCharStr = io->read();
				int countChar = atoi(countCharStr.c_str());
				Algoritm algo;
				std::string response =  std::to_string(algo.GetCountWordsRegEx(text, countChar));
				io->write("ּוםüרו "+ countCharStr+ "סטלגמכמג", response);				
				io.reset();
				fio = io = std::make_shared<FileIO>();
				fio->write(text, response);
				break;
			}

			case(file_input): {
				io = std::make_shared<FileIO>();
				std::string text = io->read();

				std::string countCharStr = io->read();
				int countChar = atoi(countCharStr.c_str());
				Algoritm algo;
				std::string response = std::to_string(algo.GetCountWordsRegEx(text, countChar));
				io->write("ּוםüרו " + countCharStr + "סטלגמכמג", response);

				io.reset();
				break;
			}
			case(exit_programm): {
				continueUsingProgram = false;
				break;
			}
		}
	}
}

void Interface::start() noexcept {
	messages.showGreeting();
	getMenuItem();
}