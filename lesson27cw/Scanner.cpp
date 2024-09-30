#include "Scanner.h"

Scanner::Scanner()
{
    m_text = "";
}

string Scanner::getText() const
{
    return m_text;
}

void Scanner::scanFile(string fileName)
{
    ifstream file(fileName);
    if (file.is_open()) {
        string line;
        while (!file.eof()) {
            getline(file, line);
            m_text += line + "\n";
        }
        file.close();
    }
}

void Scanner::setText(string text)
{
    m_text = text;
}
