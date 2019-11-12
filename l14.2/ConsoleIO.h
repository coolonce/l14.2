#pragma once
#include "InOu.h"
class ConsoleIO final: public InOu
{
public:
	std::string read() const noexcept override;
	void write(std::string text, std::string words) const noexcept override;
};

