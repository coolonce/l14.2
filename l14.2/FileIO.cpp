#include "stdafx.h"
#include "FileIO.h"

std::string FileIO::read() const noexcept {
	std::ifstream inputFileStream(validInputFilename());
	char ch;
	std::string text;
	while (!inputFileStream.eof()) {
		inputFileStream.get(ch);
		text += ch;
	}
	text += " ";
	return text;
}

void FileIO::write(std::string text, std::string words) const noexcept
{
	messages.showSaveTextInvitation();
	if (utils.confirmation()) {
		bool is_saved = true;
		do {
			std::string filename = validOutputFilename();

			std::ifstream check_existence(filename);
			if (check_existence)
			{
				messages.showRewriteFileMessage();
				if (utils.confirmation())
				{
					check_existence.close();
					std::ofstream user_output(filename);
					user_output << text << std::endl;
					user_output.close();
				}
				else
				{
					is_saved = false;
				}
			}
			else
			{
				std::ofstream user_output(filename, std::ios_base::app);
				user_output << text << std::endl;
				user_output.close();
			}
			if (is_saved) {
				messages.showSaveResultMessage();
				if (utils.confirmation())
				{
					std::ofstream user_output(filename, std::ios_base::app);
					user_output << std::endl << messages.algoResultOutput << std::endl;
					user_output << words << std::endl;
				}
			}
		} while (!is_saved);
	}
}

std::string FileIO::validInputFilename() const noexcept {
	messages.showInputFileInputinvitation();
	std::string tmpFilename;
	std::cin >> tmpFilename;
	std::ifstream tmpFileInputStream(tmpFilename);
	while (!tmpFileInputStream) {
		messages.showWrongInputMessage();
		tmpFileInputStream.close();
		std::cin >> tmpFilename;
		tmpFileInputStream.open(tmpFilename);
	}
	tmpFileInputStream.close();
	return tmpFilename;
}

std::string FileIO::validOutputFilename() const {
	std::string filename;
	bool correct_filename;
	do {
		messages.showOutputFileInputInvitation();
		correct_filename = true;
		std::cin >> filename;
		
		std::experimental::filesystem::path path{ filename };
		try {
			std::experimental::filesystem::is_regular_file(std::experimental::filesystem::current_path() / path);
		}
		catch (std::experimental::filesystem::filesystem_error fs) {
			messages.showWrongSaveFilename();
			correct_filename = false;
		}
	} while (correct_filename == false);
	return filename;
}