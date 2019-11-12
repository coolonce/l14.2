#include "stdafx.h"
#include "Messages.h"

void Messages::showGreeting() const noexcept
{
	std::cout << greeting;
}

void  Messages::showMenu() const noexcept
{
	std::cout << menu;
}

void  Messages::showContinuationMessage() const noexcept
{
	std::cout << continuation;
}

void  Messages::showMenuInputInvitation() const noexcept
{
	std::cout << menuInputInvitation;
}

void  Messages::showWrongInputMessage() const noexcept
{ 
	std::cout << wrongInputMessage;
}

void  Messages::showTextInputInvitation() const noexcept
{ 
	std::cout << textInputInvitation;
}

void  Messages::showAlgoResultOutput() const noexcept
{
	std::cout << algoResultOutput;
}

void  Messages::showSaveTextInvitation() const noexcept
{
	std::cout << saveTextInvitation << std::endl;
}

void  Messages::showOutputFileInputInvitation() const noexcept
{
	std::cout << outputFileInputInvitation;
}

void  Messages::showSaveResultMessage() const noexcept
{
	std::cout << saveResultMessage << std::endl;
}

void  Messages::showWrongSaveFilename() const noexcept
{
	std::cout << wrongSaveFilename << std::endl;
}

void  Messages::showRewriteFileMessage() const noexcept
{
	std::cout << rewriteFileMessage << std::endl;
}

void  Messages::showInputFileInputinvitation() const noexcept{
	std::cout << inputFileInputinvitation;
}