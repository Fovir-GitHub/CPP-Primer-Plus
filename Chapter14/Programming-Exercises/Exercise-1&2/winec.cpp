#include "winec.h"
#include<iostream>

Wine::Wine()
    :label("Null"), PairArray(ArrayInt(0), ArrayInt(0))
{
    number_of_year = 0;
}

Wine::Wine(const char * l, int y, const int yr[], const int bot[])
    :label(l), number_of_year(y),
    PairArray(ArrayInt(yr, y), ArrayInt(bot, y)) {}

Wine::Wine(const char * l, int y)
    :label(l), number_of_year(y),
    PairArray(ArrayInt(y), ArrayInt(y)) {}

void Wine::GetBottles()
{
    std::cout << "Enter " << label << " data for "
        << number_of_year << " year(s):\n";

    for (int i = 0; i < number_of_year; i++)
    {
        std::cout << "Enter year: ";
        std::cin >> PairArray::first()[i];
        std::cout << "Enter bottles for that year: ";
        std::cin >> PairArray::second()[i];
    }

    return;
}

void Wine::Show()
{
    std::cout << "Wine: " << label << '\n';
    std::cout << '\t' << "Year\t" << "Bottles\n";
    for (int i = 0; i < number_of_year; i++)
        std::cout << '\t' << PairArray::first()[i]
        << '\t' << PairArray::second()[i] << '\n';
    std::cout << '\n';

    return;
}

int Wine::sum()
{
    return PairArray::second().sum();
}
