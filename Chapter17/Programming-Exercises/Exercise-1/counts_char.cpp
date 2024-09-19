#include<iostream>

int main(void)
{
    char ch;

    while (std::cin.get(ch))
    {
        if (ch != '$')
            std::cout << ch;
        else
        {
            std::cin.putback(ch);
            break;
        }
    }
    std::cout << "\n";

    std::cout << (char) std::cin.peek() << '\n';

    return 0;
}