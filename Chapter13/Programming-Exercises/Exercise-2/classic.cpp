#include "classic.h"
#include<iostream>
#include<cstring>

Cd::Cd(const char * s1, const char * s2, int n, double x)
    :selections(n), playtime(x)
{
    performers = new char[std::strlen(s1) + 1];
    label = new char[std::strlen(s2) + 1];
    std::strcpy(performers, s1);
    std::strcpy(label, s2);
}

Cd::Cd(const Cd & d)
{
    performers = new char[std::strlen(d.performers) + 1];
    label = new char[std::strlen(d.label) + 1];
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);

    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd() :selections(0), playtime((double) 0)
{
    performers = new char[5];
    label = new char[5];
    std::strcpy(performers, "Null");
    std::strcpy(label, "Null");
}

Cd::~Cd()
{
    delete[] performers;
    delete[] label;
}

void Cd::Report() const
{
    std::cout << "Performer: " << performers << '\n'
        << "Label: " << label << '\n'
        << "Selection: " << selections << '\n'
        << "Play time: " << playtime << '\n';

    return;
}

Cd & Cd::operator=(const Cd & d)
{
    if (this == &d)
        return *this;

    delete[] performers;
    delete[] label;

    performers = new char[std::strlen(d.performers) + 1];
    label = new char[std::strlen(d.label) + 1];
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;

    return *this;
}

Classic::Classic(const char * s1, const char * s2,
    const char * s3,
    int n, int x) :Cd(s1, s2, n, x)
{
    primary_work = new char[std::strlen(s3) + 1];
    std::strcpy(primary_work, s3);
}

Classic::Classic() :Cd()
{
    primary_work = new char[5];
    std::strcpy(primary_work, "Null");
}

void Classic::Report() const
{
    Cd::Report();
    std::cout << "Primary work: " << primary_work << '\n';

    return;
}

Classic & Classic::operator=(const Classic & d)
{
    if (this == &d)
        return *this;
    Cd::operator=(d);
    delete[] primary_work;
    primary_work = new char[std::strlen(d.primary_work) + 1];
    std::strcpy(primary_work, d.primary_work);

    return *this;
}

Classic::~Classic()
{
    delete[] primary_work;
}
