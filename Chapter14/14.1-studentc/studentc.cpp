#include"studentc.h"
using std::ostream;
using std::endl;
using std::istream;
using std::string;

std::ostream & Student::arr_out(std::ostream & os) const
{
    int i;
    int lim = scores.size();
    if (lim > 0)
    {
        for (i = 0; i < lim; i++)
        {
            os << scores[i] << " ";
            if (i % 5 == 4)
                os << endl;
        }
        if (i % 5 != 0)
            os << endl;
    }
    else
        os << " empty array ";

    return os;
}

double Student::Average() const
{
    if (scores.size() > 0)
        return scores.sum() / scores.size();
    else
        return 0;
}

std::istream & operator>>(std::istream & is, Student & stu)
{
    is >> stu.name;
    return is;
}

std::istream & getline(std::istream & is, Student & stu)
{
    getline(is, stu.name);
    return is;
}

std::ostream & operator<<(std::ostream & os, const Student & stu)
{
    os << "Scores for " << stu.name << ":\n";
    stu.arr_out(os);

    return os;
}
