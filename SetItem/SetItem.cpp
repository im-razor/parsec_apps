#include <iostream>
#include <conio.h>

#pragma warning(disable: 4691)

using namespace System;
using namespace Parsec;
using namespace Parsec::Readers;
using namespace Parsec::Shaiya::SetItem;

int main()
{
	std::cout << "Press 'e' to extract or 'c' to compile.\n";

	char ch = _getch();

	if (ch == 'e')
	{
		SetItem^ setItem = Reader::ReadFromFile<SetItem^>("SetItem.SData");
		setItem->ExportJson("SetItem.json");
	}

	if (ch == 'c')
	{
		SetItem^ setItem = Reader::ReadFromJson<SetItem^>("SetItem.json");
		setItem->WriteEncrypted("SetItem.SData");
	}
}
