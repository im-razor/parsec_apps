#include <iostream>
#include <conio.h>

#pragma warning(disable: 4691)

using namespace System;
using namespace Parsec;
using namespace Parsec::Readers;
using namespace Parsec::Shaiya::Data;

int main(array<System::String^>^ args)
{
	auto data = DataBuilder::CreateFromDirectory("Data", "update");

	for each (SFile^ file in data->Sah->RootFolder->Files)
	{
		Console::WriteLine(file->RelativePath);
	}

	for each (SFolder^ folder in data->Sah->RootFolder->Subfolders)
	{
		for each (SFile^ file in folder->Files)
		{
			Console::WriteLine(file->RelativePath);
		}
	}

	Console::WriteLine("Press any key to exit...");

	_getch();
    return 0;
}
