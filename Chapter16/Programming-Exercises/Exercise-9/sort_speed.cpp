#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<ctime>

const int MAXN = 1000000;

int main(void)
{
    using std::clock;

    std::srand(std::time(nullptr));

    std::vector<int> vi0(MAXN);
    clock_t sort_start, sort_end;
    clock_t man_start, man_end;

    for (auto & x : vi0)
        x = rand();

    std::vector<int> vi(vi0);
    std::list<int> li(MAXN);

    for (auto x : vi0)
        li.push_back(x);

    // test sort() function's speed
    sort_start = clock();
    std::sort(vi.begin(), vi.end());
    sort_end = clock();
    std::cout << "Sort time: "
        << (double) (sort_end - sort_start) / CLOCKS_PER_SEC << '\n';

    // test my sort operation's speed
    vi = vi0;
    man_start = clock();
    vi.assign(li.begin(), li.end());
    std::sort(vi.begin(), vi.end());
    li.assign(vi.begin(), vi.end());
    man_end = clock();
    std::cout << "My sort time: "
        << (double) (man_end - man_start) / CLOCKS_PER_SEC << '\n';

    for (int i = 1; i < MAXN; i++)
        if (vi[i] < vi[i - 1])
            std::cout << "Not sorted\n";

    return 0;
}