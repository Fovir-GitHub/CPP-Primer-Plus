#include<iostream>

int main(void)
{
    using std::cout;
    using std::endl;
    using std::ios_base;

    int tmeperature = 63;

    cout << "Today's water temperature: ";
    cout.setf(ios_base::showpoint);
    cout << tmeperature << endl;

    cout << "for our programming friends, that's\n";
    cout << std::hex << tmeperature << endl;
    cout.setf(ios_base::uppercase);
    cout.setf(ios_base::showbase);
    cout << "or\n";
    cout << tmeperature << endl;
    cout << "How " << true << "! oops -- How ";
    cout.setf(ios_base::boolalpha);
    cout << true << "!\n";

    return 0;
}