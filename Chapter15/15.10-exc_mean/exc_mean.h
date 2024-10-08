#ifndef _EXC_MEAN_H_
#define _EXC_MEAN_H_

#include<iostream>


class bad_hmean
{
private:
    double v1, v2;

public:
    bad_hmean(double a = 0, double b = 0) :v1(a), v2(b) {}
    void mesg();
};

inline void bad_hmean::mesg()
{
    std::cout << "hean(" << v1 << ", " << v2 << "): "
        << "invalid arguments: a = -b\n";

    return;
}

class bad_gmean
{
public:
    double v1, v2;

    bad_gmean(double a = 0, double b = 0) :v1(a), v2(b) {}
    const char * mesg();
};

inline const char * bad_gmean::mesg()
{
    return "gmean() arguments should be >= 0\n";
}

#endif // !_EXC_MEAN_H_