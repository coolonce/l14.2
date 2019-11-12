#pragma once
#include <string>
#include <iostream>

class Messages final {
public:
	const std::string greeting = "Работу выполнили студенты 465 группы\nКиселев Вадим\nДанная программа принимает на вход текст и считает слова, имеющих длину меньше заданного числа.\n";
	const std::string menu = "1.Ввод текста вручную при помощи клавиаутры.\n2.Ввод текста из файла.\n3.Выход из приложения.\n";
	const std::string continuation = "Хотите ли продолжить? Y/N";
	const std::string wrongInputMessage = "Некорректный ввод\nПовторите: ";
	const std::string menuInputInvitation = "Введите номер пункта меню 1-3: ";
	const std::string inputFileInputinvitation = "Введите имя файла, в котором хранится искомый текст: ";
	const std::string textInputInvitation = "Вводите текст с клавиатуры, по завершении ввода нажмите клавишу 'Enter' далее введите кол-во символов и нажмите Enter: ";
	const std::string saveTextInvitation = "Хотите ли вы сохранить текст в файл? Y/N";
	const std::string outputFileInputInvitation = "Введите имя файла, в который будет сохранён текст: ";
	const std::string rewriteFileMessage = "Хотите ли вы перезаписать файл?  Y/N";
	const std::string saveResultMessage = "Хотите ли вы также сохранить результат работы программы? Y/N";
	const std::string wrongSaveFilename = "В имени файла не должны присутсвовать зарезервированные системой имена\n";

	const std::string algoResultOutput = "Количество найденных слов";
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