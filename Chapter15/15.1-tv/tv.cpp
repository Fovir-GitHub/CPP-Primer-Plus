#include<iostream>
#include"tv.h"

bool Tv::volup()
{
    if (volume < MaxVal)
    {
        volume++;
        return true;
    }
    else
        return false;
}

bool Tv::voldown()
{
    if (volume > MinVal)
    {
        volume--;
        return true;
    }
    else
        return false;
}

void Tv::chanup()
{
    if (channel < maxchannel)
        channel++;
    else
        channel = 1;

    return;
}

void Tv::chandown()
{
    if (channel > 1)
        channel--;
    else
        channel = maxchannel;

    return;
}

void Tv::settings() const
{
    using std::cout;
    using std::endl;

    cout << "TV is " << (state == Off ? "Off" : "On") << endl;
    if (state == On)
        cout << "Volume setting = " << volume << '\n'
        << "Channel settings = " << channel << '\n'
        << "Mode = "
        << (mode == Antenna ? "antenna" : "cable") << '\n'
        << "Input = "
        << (input == TV ? "TV" : "DVD") << '\n';

    return;
}
