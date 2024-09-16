#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

int main(void)
{
    std::vector<std::string> mat_friend_name, pat_friend_name,
        result;
    std::string temp;
    std::vector<std::string>::iterator end_point, it;

    std::cout << "Please enter Mat's friends' name (quit to quit):\n";
    while (std::getline(std::cin, temp) && temp != "quit")
        mat_friend_name.push_back(temp);

    std::cout << "Please enter Pat's friends' name (quit to quit):\n";
    while (std::getline(std::cin, temp) && temp != "quit")
        pat_friend_name.push_back(temp);

    mat_friend_name.insert(mat_friend_name.end(),
        pat_friend_name.begin(), pat_friend_name.end());
    end_point = std::unique(mat_friend_name.begin(), mat_friend_name.end());

    for (it = mat_friend_name.begin(); it != end_point; it++)
        std::cout << (*it) << '\n';

    return 0;
}