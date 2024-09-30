#pragma once
#include "Printer.h"
#include "Scanner.h"

class Xerox : public Scanner, public Printer
{
public:
	void copyFile(string fileName, int copy = 1);

};

