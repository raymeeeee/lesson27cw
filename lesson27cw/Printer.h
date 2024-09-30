#pragma once
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class Printer
{
public:
	static void printFile(string text, string fileName, int copy = 1);
};

