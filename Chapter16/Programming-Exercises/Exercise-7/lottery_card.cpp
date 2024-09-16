#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>

std::vector<int> Lotto(int number_of_spot, int spots);

int main(void)
{
    std::vector<int> winners;
    winners = Lotto(51, 6);

    for (auto x : winners)
        std::cout << x << ' ';

    return 0;
}

std::vector<int> Lotto(int number_of_spot, int spots)
{
    std::vector<int> temp(number_of_spot);
    std::iota(temp.begin(), temp.end(), 1);
    std::random_shuffle(temp.begin(), temp.end());

    std::vector<int> result(temp.begin(), temp.begin() + spots);
    std::sort(result.begin(), result.end());

    return result;
}
