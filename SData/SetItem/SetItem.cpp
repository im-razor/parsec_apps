#include <iostream>
#include <conio.h>

#pragma warning(disable: 4691)

using namespace Parsec;
using namespace Parsec::Readers;
using namespace Parsec::Shaiya::SetItem;

int main()
{
	std::cout << "Press 'e' to export or 'i' to import.\n";

	char ch = _getch();

	if (ch == 'e')
	{
		auto setItem = Reader::ReadFromFile<SetItem^>("SetItem.SData");
		setItem->ExportJson("SetItem.json");
	}

	if (ch == 'i')
	{
		auto setItem = Reader::ReadFromJson<SetItem^>("SetItem.json");
		setItem->WriteEncrypted("SetItem.SData");
	}
}
