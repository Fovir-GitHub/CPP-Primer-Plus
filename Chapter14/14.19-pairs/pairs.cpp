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

int main(void)
{
    using std::cout;
    using std::endl;
    using std::string;

    Pair<string, int> rating[4] =
    {
        Pair<string,int>("The Purpled Duck",5),
        Pair<string,int>("Jaquie's Frisco Al Fresco",4),
        Pair<string,int>("Cafe Souffle",5),
        Pair<string,int>("Bertie's Eats",3)
    };

    int joints = sizeof(rating) / sizeof(Pair<string, int>);

    cout << "rating:\t Eatery\n";
    for (int i = 0; i < joints; i++)
        cout << rating[i].second() << ":\t"
        << rating[i].first() << endl;

    cout << "Oops! Revised rating:\n";
    rating[3].first() = "Bertie's Fab Eats";
    rating[3].second() = 6;

    cout << rating[3].second() << ":\t"
        << rating[3].first() << endl;

    return 0;
}