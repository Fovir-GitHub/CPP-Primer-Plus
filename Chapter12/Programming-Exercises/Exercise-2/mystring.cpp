#include<cstring>
#include<cctype>
#include"mystring.h"

String::String()
{
    str = new char[1];
    std::strcpy(str, "");
}

String::String(const char * s)
{
    str = new char[std::strlen(s) + 1];
    std::strcpy(str, s);
}

String::String(const String & s)
{
    str = new char[std::strlen(s.str) + 1];
    std::strcpy(str, s.str);
}

String::~String()
{
    delete[]str;
}

std::ostream & operator<<(std::ostream & os, const String & s)
{
    os << s.str;
    return os;
}

std::istream & operator>>(std::istream & is, String & s)
{
    static const int MAX_LENGTH = 512;
    char temp[MAX_LENGTH];

    is.get(temp, MAX_LENGTH);

    if (is)
        s = temp;
    while (is && is.get() != '\n');

    return is;
}

String & String::operator=(const String & s)
{
    if (this == &s)
        return *this;
    delete[]str;
    str = new char[std::strlen(s.str) + 1];
    std::strcpy(str, s.str);
    return *this;
}

String & String::operator=(const char * s)
{
    delete[]str;
    str = new char[std::strlen(s) + 1];
    std::strcpy(str, s);
    return *this;
}

bool operator==(const String & s1, const String & s2)
{
    return !(std::strcmp(s1.str, s2.str));
}

String operator+(const String & s1, const String & s2)
{
    char * temp = new char[std::strlen(s1.str) + std::strlen(s2.str) + 2];
    std::strcat(temp, s1.str);
    std::strcat(temp, s2.str);

    String result(temp);
    return result;
}

String operator+(const char * s1, const String & s2)
{
    String first(s1);
    return first + s2;
}

void String::stringup()
{
    int len = std::strlen(str);
    for (int i = 0; i < len; i++)
        if (std::isalpha(str[i]))
            str[i] = std::toupper(str[i]);
    return;
}

void String::stringlow()
{
    int len = std::strlen(str);
    for (int i = 0; i < len; i++)
        if (std::isalpha(str[i]))
            str[i] = std::tolower(str[i]);

    return;
}

int String::has(const char target)
{
    int sum = 0;
    int len = std::strlen(str);

    for (int i = 0; i < len; i++)
        if (str[i] == target)
            sum++;

    return sum;
}

