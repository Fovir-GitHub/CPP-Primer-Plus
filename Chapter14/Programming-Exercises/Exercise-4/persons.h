#ifndef _PERSONS_H_
#define _PERSONS_H_

#include<string>
using std::string;

class Person
{
private:
    string first_name;
    string last_name;

public:
    Person() :first_name("Null"), last_name("Null") {};
    Person(const string & fn,
        const string & ln) :first_name(fn), last_name(ln) {}
    virtual ~Person() {}

    virtual void Show();
    void SetFirstName(const string & fn) { first_name = fn; }
    void SetLastName(const string & ln) { last_name = ln; }
};

class Gunslinger :virtual public Person
{
private:
    double draw_time;
    int number_of_notch;

public:
    Gunslinger() :Person(), draw_time((double) 0),
        number_of_notch(0) {}
    Gunslinger(const string & fn, const string & ln,
        double dt = 0, int nn = 0)
        :Person(fn, ln), draw_time(dt), number_of_notch(nn) {}
    ~Gunslinger() {}

    double Draw() { return draw_time; }
    virtual void Show();
    void SetDrawTime(double dt) { draw_time = dt; }
    void SetNumberOfNotch(int nn) { number_of_notch = nn; }
};

class PokerPlayer :virtual public Person
{
protected:
    enum { CARD_NUMBER = 52 };
    int card_number;

public:
    PokerPlayer() :Person() {}
    PokerPlayer(const string & fn, const string & ln,
        int cn = 1) :Person(fn, ln), card_number(cn) {}
    ~PokerPlayer() {}

    int Draw();
    int GetCardNumber() { return card_number; }
    void SetCardNumber(int cn) { card_number = cn; }
};

class BadDude :public Gunslinger, public PokerPlayer
{
public:
    BadDude() :Person() {}
    BadDude(const string & fn, const string & ln,
        double dt = 0, int cn = 1) :Person(fn, ln),
        Gunslinger(fn, ln, dt),
        PokerPlayer(fn, ln, cn) {}
    ~BadDude() {}

    double Gdraw() { return Gunslinger::Draw(); }
    int Cdraw() { return PokerPlayer::Draw(); }
    void Show();
};

#endif // !_PERSONS_H_