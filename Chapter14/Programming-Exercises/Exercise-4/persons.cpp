#include<iostream>
#include"persons.h"
#include<cstdlib>

void Person::Show()
{
    std::cout << first_name << ' ' << last_name
        << '\n';
    return;
}

void Gunslinger::Show()
{
    std::cout << "label: Gunslinger\n";
    std::cout << "Name: ";
    Person::Show();
    std::cout << "Draw time: " << draw_time << '\n'
        << "Number of notches: " << number_of_notch << '\n';

    return;
}

int PokerPlayer::Draw()
{
    return (card_number = std::rand() % CARD_NUMBER + 1);
}

void BadDude::Show()
{
    std::cout << "label: BadDude\n";
    std::cout << "Name: ";
    Person::Show();
    std::cout << "Draw time: " << Gdraw() << '\n';
    std::cout << "Card number: " << Cdraw() << '\n';

    return;
}
