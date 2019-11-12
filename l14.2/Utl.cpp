#include "stdafx.h"
#include "Utl.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>


char Utl::correctCharInput() const noexcept
{
	char ch;

	std::cin >> ch;
	while (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
		messages.showWrongInputMessage();
		std::cin >> ch;
	}
	std::cin.ignore(INT_MAX, '\n');
	return ch;
}

int Utl::correctIntInput(int min, int max) const noexcept
{
	int number;

	std::cin >> number;
	if (min == max) {
		while (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			messages.showWrongInputMessage();
			std::cin >> number;
		}
		std::cin.ignore(INT_MAX, '\n');
		return number;
	}
	else {
		while (std::cin.fail() || number < min || number > max)
		{
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			messages.showWrongInputMessage();
			std::cin >> number;
		}
		std::cin.ignore(INT_MAX, '\n');
		return number;
	}
}

bool Utl::confirmation() const noexcept
{
	char answer;
	bool is_correct;
	do
	{
		is_correct = true;
		answer = correctCharInput();
		switch (toupper(answer))
		{
		case 'Y':
			return true;
			break;
		case 'N':
			return false;
			break;
		default:
			messages.showWrongInputMessage();
			is_correct = false;
		}
	} while (is_correct == false);

	return false;
}