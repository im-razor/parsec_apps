#include <iostream>
#include <conio.h>

#pragma warning(disable: 4691)

using namespace System;
using namespace Parsec;
using namespace Parsec::Readers;
using namespace Parsec::Shaiya::SData;

int main()
{
	Console::Write("Enter the SData name: ");
	String^ input = Console::ReadLine();

	std::cout << "Press 'e' to encrypt or 'd' to decrypt.\n";

	char ch = _getch();

	if (ch == 'e')
	{
		String^ output = gcnew String("Encrypted." + input);
		SData::EncryptFile(input, output);
	}

	if (ch == 'd')
	{
		String^ output = gcnew String("Decrypted." + input);
		SData::DecryptFile(input, output, true);
	}
}
