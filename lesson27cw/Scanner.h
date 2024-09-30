#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Scanner
{
protected:
	string m_text;
public:
	Scanner();

	string getText()const;
	void scanFile(string fileName);
	void setText(string text);
};

