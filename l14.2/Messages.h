#pragma once
#include <string>
#include <iostream>

class Messages final {
public:
	const std::string greeting = "������ ��������� �������� 465 ������\n������� �����\n������ ��������� ��������� �� ���� ����� � ������� �����, ������� ����� ������ ��������� �����.\n";
	const std::string menu = "1.���� ������ ������� ��� ������ ����������.\n2.���� ������ �� �����.\n3.����� �� ����������.\n";
	const std::string continuation = "������ �� ����������? Y/N";
	const std::string wrongInputMessage = "������������ ����\n���������: ";
	const std::string menuInputInvitation = "������� ����� ������ ���� 1-3: ";
	const std::string inputFileInputinvitation = "������� ��� �����, � ������� �������� ������� �����: ";
	const std::string textInputInvitation = "������� ����� � ����������, �� ���������� ����� ������� ������� 'Enter' ����� ������� ���-�� �������� � ������� Enter: ";
	const std::string saveTextInvitation = "������ �� �� ��������� ����� � ����? Y/N";
	const std::string outputFileInputInvitation = "������� ��� �����, � ������� ����� ������� �����: ";
	const std::string rewriteFileMessage = "������ �� �� ������������ ����?  Y/N";
	const std::string saveResultMessage = "������ �� �� ����� ��������� ��������� ������ ���������? Y/N";
	const std::string wrongSaveFilename = "� ����� ����� �� ������ ������������� ����������������� �������� �����\n";

	const std::string algoResultOutput = "���������� ��������� ����";
	void showGreeting() const noexcept;
	void showMenu() const noexcept;
	void showContinuationMessage() const noexcept;
	void showMenuInputInvitation() const noexcept;
	void showInputFileInputinvitation() const noexcept;
	void showWrongInputMessage() const noexcept;
	void showTextInputInvitation() const noexcept;
	void showAlgoResultOutput() const noexcept;
	void showSaveTextInvitation() const noexcept;
	void showOutputFileInputInvitation() const noexcept;
	void showSaveResultMessage() const noexcept;
	void showWrongSaveFilename() const noexcept;
	void showRewriteFileMessage() const noexcept;

};