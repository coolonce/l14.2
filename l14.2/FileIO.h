#pragma once
#include "InOu.h"
#include <locale>
#include <filesystem>

class FileIO final : public InOu{
private:
	std::string validInputFilename() const  noexcept;
	std::string validOutputFilename() const;
public:
	std::string read() const noexcept override;
	void write(std::string text, std::string words) const noexcept override;
	~FileIO() {}
};

