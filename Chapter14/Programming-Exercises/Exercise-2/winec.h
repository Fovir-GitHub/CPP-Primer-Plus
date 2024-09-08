#ifndef _WINEC_H_
#define _WINEC_H_

#include"pairs.h"
#include<string>
#include<valarray>

typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine :private PairArray
{
private:
    std::string label;
    int number_of_year;

public:
    Wine();
    Wine(const char * l, int y, const int yr[], const int bot[]);
    Wine(const char * l, int y);
    ~Wine() {}

    void GetBottles();
    void Show();
    std::string & Label() { return label; }
    int sum();
};

#endif // !_WINEC_H_