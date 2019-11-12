#pragma once

#include <string>
#include "Algoritm.h"
#include "Messages.h"
#include "Utl.h"
#include "InOu.h"
#include "FileIO.h"
#include "ConsoleIO.h"
class Interface
{
	private:
		const Utl utils;
		const Messages messages;
		enum menuItems {
			custom_input = 1, file_input, exit_programm
		};
	public:
		Interface() {}
		void getMenuItem() const noexcept;
		void start() noexcept;
};

