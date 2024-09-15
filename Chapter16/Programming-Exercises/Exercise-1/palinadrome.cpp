#include<iostream>
#include<cctype>
#include<string>

bool isPalindrome(std::string & s);

int main(void)
{
    std::string input("");
    char temp;

    std::cout << "Please input a word:\n";
    while (std::cin.get(temp) && temp != '\n')
        if (std::isalpha(temp))
            input += std::tolower(temp);

    std::cout << (isPalindrome(input) ? "True" : "False") << '\n';

    return 0;
}

bool isPalindrome(std::string & s)
{
    std::string::iterator head = s.begin(),
        tail = s.end() - 1;

    for (; head < tail; head++, tail--)
        if (*head != *tail)
            return false;

    return true;
}
