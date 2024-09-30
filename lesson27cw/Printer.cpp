#include "Printer.h"

void Printer::printFile(string text, string fileName, int copy)
{
	for (int i = 0; i < copy; i++)
	{
		ofstream file("Copy#"+to_string(i) + fileName);
		if (file.is_open()) {
			file << text;
			file.close();
		}
	}
}
