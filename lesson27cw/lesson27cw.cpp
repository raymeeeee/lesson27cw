#include "Scanner.h"

int main()
{
    Scanner a;
    cout << "Info:\n" << a.getText() << endl;
    string user;
    cout << "Input file name: ";
    cin >> user;
    a.scanFile(user);
    cout << "===========================" << endl;
    cout << "Info:\n" << a.getText() << endl;
    
}

