#include<iostream>

long double sum_values() { return 0; }

template<typename T, typename... Args>
long double sum_values(const T & value, const Args... args);

int main(void)
{
    std::cout << sum_values(1, 3.5, 'A', 100) << '\n';

    return 0;
}

template<typename T, typename ...Args>
long double sum_values(const T & value, const Args ...args)
{
    return static_cast<long double>(value) + sum_values(args...);
}