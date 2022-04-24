#include <iostream>
#include <conio.h>

#pragma warning(disable: 4691)

using namespace Parsec;
using namespace Parsec::Readers;
using namespace Parsec::Shaiya::KillStatus;

int main()
{
	std::cout << "Press 'e' to export or 'i' to import.\n";
	
	char ch = _getch();

	if (ch == 'e')
	{
		auto killStatus = Reader::ReadFromFile<KillStatus^>("KillStatus.SData");
		killStatus->ExportJson("KillStatus.json");
	}

	if (ch == 'i')
	{
		auto killStatus = Reader::ReadFromJson<KillStatus^>("KillStatus.json");
		killStatus->Write("KillStatus.SData");
	}
}
