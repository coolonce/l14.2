#pragma once

#include "Messages.h"
#include "Utl.h"
#include <iostream>
#include <fstream>

class InOu {
protected:
	const Messages messages;
	const Utl utils;
public:
	virtual std::string read() const noexcept = 0;
	virtual void write(std::string text, std::string words) const noexcept = 0;
	virtual ~InOu() {};
};