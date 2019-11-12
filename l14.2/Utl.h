#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Messages.h"

class Utl final{
private:
	Messages messages;
public:
	bool confirmation() const noexcept;
	char correctCharInput() const noexcept;
	int correctIntInput(int min = 0, int max = 0) const noexcept;
};

