#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include<iostream>

class String
{
private:
    char * str;

public:
    String();
    String(const char * s);
    String(const String & s);
    ~String();

    String & operator=(const String & s);
    String & operator=(const char * s);

    void stringup();
    void stringlow();
    int has(const char target);

    friend bool operator==(const String & s1,
        const String & s2);
    friend String operator+(const String & s1,
        const String & s2);
    friend String operator+(const char * s1,
        const String & s2);
    friend std::ostream & operator<<(std::ostream & os,
        const String & s);
    friend std::istream & operator>>(std::istream & is,
        String & s);
};

#endif // !_MYSTRING_H_