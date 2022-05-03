#include <iostream>
#include <conio.h>

#pragma warning(disable: 4691)

using namespace System;
using namespace Parsec;
using namespace Parsec::Readers;
using namespace Parsec::Shaiya::MON;

int main()
{
	std::cout << "Press '0' to Monster extract or '1' to Monster compile.\nPress '2' to Vehicle_De_01 extract or '3' to Vehicle_De_01 compile.\nPress '4' to Vehicle_El_01 extract or '5' to Vehicle_El_01 compile.\nPress '6' to Vehicle_Hu_01 extract or '7' to Vehicle_Hu_01 compile.\nPress '8' to Vehicle_Vi_01 extract or '9' to Vehicle_Vi_01 compile.\nPress 'e' to NPC extract or 'c' to NPC compile.\n";

	char ch = _getch();
	

	if (ch == '0')
	{
		MON^ monreads = Reader::ReadFromFile<MON^>("monster.MON");
		monreads->ExportJson("monster.json");
	}

	if (ch == '1')
	{
		MON^ monreads = Reader::ReadFromJson<MON^>("monster.json");
		monreads->Write("monster.MON");
	}

	if (ch == '2')
	{
		MON^ monreads = Reader::ReadFromFile<MON^>("Vehicle_De_01.MON");
		monreads->ExportJson("Vehicle_De_01.json");
	}

	if (ch == '3')
	{
		MON^ monreads = Reader::ReadFromJson<MON^>("Vehicle_De_01.json");
		monreads->Write("Vehicle_De_01.MON");
	}

	if (ch == '4')
	{
		MON^ monreads = Reader::ReadFromFile<MON^>("Vehicle_El_01.MON");
		monreads->ExportJson("Vehicle_El_01.json");
	}

	if (ch == '5')
	{
		MON^ monreads = Reader::ReadFromJson<MON^>("Vehicle_El_01.json");
		monreads->Write("Vehicle_El_01.MON");
	}

	if (ch == '6')
	{
		MON^ monreads = Reader::ReadFromFile<MON^>("Vehicle_Hu_01.MON");
		monreads->ExportJson("Vehicle_Hu_01.json");
	}

	if (ch == '7')
	{
		MON^ monreads = Reader::ReadFromJson<MON^>("Vehicle_Hu_01.json");
		monreads->Write("Vehicle_Hu_01.MON");
	}

	if (ch == '8')
	{
		MON^ monreads = Reader::ReadFromFile<MON^>("Vehicle_Vi_01.MON");
		monreads->ExportJson("Vehicle_Vi_01.json");
	}

	if (ch == '9')
	{
		MON^ monreads = Reader::ReadFromJson<MON^>("Vehicle_Vi_01.json");
		monreads->Write("Vehicle_Vi_01.MON");
	}

	if (ch == 'e')
	{
		MON^ monreads = Reader::ReadFromFile<MON^>("NPC.MON");
		monreads->ExportJson("NPC.json");
	}

	if (ch == 'c')
	{
		MON^ monreads = Reader::ReadFromJson<MON^>("NPC.json");
		monreads->Write("NPC.MON");
	}

}

