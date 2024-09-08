#ifndef _PAIRS_H_
#define _PAIRS_H_

#include<iostream>
#include<string>

template <class T1, class T2>
class Pair
{
private:
    T1 a;
    T2 b;

public:
    T1 & first() { return a; }
    T2 & second() { return b; }
    T1 first()const { return a; }
    T2 second()const { return b; }

    Pair(const T1 & aval, const T2 & bval) :a(aval), b(bval) {}
    Pair() {}
};

#endif // !_PAIRS_H_