#include <iostream>
#include <conio.h>

#pragma warning(disable: 4691)

using namespace Parsec;
using namespace Parsec::Readers;
using namespace Parsec::Shaiya::KillStatus;

int main()
{
	std::cout << "Press 'e' to extract or 'c' to compile.\n";
	
	char ch = _getch();

	if (ch == 'e')
	{
		KillStatus^ killStatus = Reader::ReadFromFile<KillStatus^>("KillStatus.SData");
		killStatus->ExportJson("KillStatus.json");
	}

	if (ch == 'c')
	{
		KillStatus^ killStatus = Reader::ReadFromJson<KillStatus^>("KillStatus.json");
		killStatus->Write("KillStatus.SData");
	}
}
