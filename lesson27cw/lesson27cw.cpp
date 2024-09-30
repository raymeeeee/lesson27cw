#include "Scanner.h"
#include "Printer.h"
int main()
{
    //Scanner a;
    //cout << "Info:\n" << a.getText() << endl;
    //string user;
    //cout << "Input file name: ";
    //cin >> user;
    //a.scanFile(user);
    //cout << "===========================" << endl;
    //cout << "Info:\n" << a.getText() << endl;

    Printer::printFile("Hello world!", "file2.txt", 3);
    
}

