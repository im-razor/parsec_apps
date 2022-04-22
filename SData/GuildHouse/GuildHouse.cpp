#include <iostream>
#include <conio.h>

#pragma warning(disable: 4691)

using namespace Parsec;
using namespace Parsec::Readers;
using namespace Parsec::Shaiya::GuildHouse;

int main()
{
	std::cout << "Press 'e' to extract or 'c' to compile.\n";

	char ch = _getch();

	if (ch == 'e')
	{
		auto guildHouse = Reader::ReadFromFile<GuildHouse^>("GuildHouse.SData");
		guildHouse->ExportJson("GuildHouse.json");
	}

	if (ch == 'c')
	{
		auto guildHouse = Reader::ReadFromJson<GuildHouse^>("GuildHouse.json");
		guildHouse->Write("GuildHouse.SData");
	}
}