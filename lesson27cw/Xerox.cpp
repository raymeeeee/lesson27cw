#include "Xerox.h"

void Xerox::copyFile(string fileName, int copy)
{
	this->scanFile(fileName);
	this->printFile(this->getText(), fileName, copy);


}
