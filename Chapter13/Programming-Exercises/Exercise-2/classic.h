#ifndef _CLASSIC_H_
#define _CLASSIC_H_

class Cd
{
private:
    char * performers;
    char * label;
    int selections;
    double playtime;

public:
    Cd(const char * s1, const char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    virtual ~Cd();

    virtual void Report()const;
    virtual Cd & operator=(const Cd & d);
};

class Classic :public Cd
{
private:
    char * primary_work;

public:
    Classic(const char * s1, const char * s2,
        const char * s3, int n, int x);
    Classic();

    virtual void Report()const;
    virtual Classic & operator=(const Classic & d);
    virtual ~Classic();
};

#endif // !_CLASSIC_H_