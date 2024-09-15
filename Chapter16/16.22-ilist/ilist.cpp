#include<iostream>
#include<initializer_list>

double sum(std::initializer_list<double> il);
double average(const std::initializer_list<double> & ri1);

int main(void)
{
    using std::cout;

    cout << "List 1: sum = " << sum({ 2,3,4 })
        << ", ave = " << average({ 2,3,4 }) << '\n';

    std::initializer_list<double> dl = { 1.1,2.2,3.3,4.4,5.5 };
    cout << "List 2: sum = " << sum(dl)
        << ", ave = " << average(dl) << '\n';
    dl = { 16.0,25.0,36.5,40.0,64.0 };
    cout << "List 3: sum = " << sum(dl)
        << ", ave = " << average(dl) << '\n';

    return 0;
}

double sum(std::initializer_list<double> il)
{
    double tot = 0;
    for (auto p = il.begin(); p != il.end(); p++)
        tot += *p;

    return tot;
}

double average(const std::initializer_list<double> & ri1)
{
    double tot = 0;
    int n = ri1.size();
    double ave = (double) 0;

    if (n > 0)
    {
        for (auto p : ri1)
            tot += p;
        ave = (double) tot / n;
    }

    return ave;
}
