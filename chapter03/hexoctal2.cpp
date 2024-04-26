// hexoctal2.cpp -- display vlues in hex and octal
#include <iostream>

int main()
{
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex;    // manipulator for changing numgber base
    cout << "waist = " << waist << " (hex for 42)" << endl;
    cout << oct;    // manipulator for changing number base
    cout << "inseam = " << inseam << " (octal for 42)" << endl;
    return 0;
}