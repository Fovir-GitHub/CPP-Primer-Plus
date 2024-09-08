#include<iostream>
#include<cstdlib>
#include<ctime>
#include"persons.h"
using std::cout;

int main(void)
{
    std::srand(std::time(nullptr));

    BadDude test1("this", "test", 10, 3);
    test1.Show();

    Person who("Who", "am I");
    who.Show();
    who.SetFirstName("FirstName");
    who.SetLastName("LastName");
    who.Show();

    Gunslinger gun;
    gun.Show();

    PokerPlayer pp("Poker", "Man");
    std::cout << pp.Draw() << '\n';
    pp.SetCardNumber(51);
    pp.Show();
    std::cout << pp.GetCardNumber() << '\n';

    return 0;
}