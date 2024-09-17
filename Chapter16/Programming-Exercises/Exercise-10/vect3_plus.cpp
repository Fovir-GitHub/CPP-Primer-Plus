#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<memory>

struct Review
{
    std::string title;
    int rating;
    int price;
};

std::shared_ptr<Review> fillReview();
bool sortInAlphabetical(std::shared_ptr<Review> & r1,
    std::shared_ptr<Review> & r2);
void showMenu();
bool sortInIncreasingRating(std::shared_ptr<Review> & r1,
    std::shared_ptr<Review> & r2);
bool sortInDecreasingPrice(std::shared_ptr<Review> & r1,
    std::shared_ptr<Review> & r2);

int main(void)
{
    std::vector<std::shared_ptr<Review> > ptr2Review;
    std::shared_ptr<Review> temp;
    int choice;

    while (temp = fillReview())
        ptr2Review.push_back(temp);

    std::vector<std::shared_ptr<Review> > copy(ptr2Review);

    std::cout << "Please input your choice:\n";
    showMenu();
    while (std::cin >> choice)
    {
        switch (choice)
        {
        case 1:
            std::sort(copy.begin(), copy.end(), sortInAlphabetical);
            break;
        case 2:
            std::sort(copy.begin(), copy.end(), sortInIncreasingRating);
            break;
        case 3:
            std::sort(copy.rbegin(), copy.rend(), sortInIncreasingRating);
            break;
        case 4:
            std::sort(copy.begin(), copy.end(), sortInDecreasingPrice);
            break;
        case 5:
            for (auto x : ptr2Review)
                std::cout << "title: " << x->title << '\n'
                << "rating: " << x->rating << '\n'
                << "price: " << x->price << "\n\n";
            break;
        default:
            std::cout << "Please input 1, 2, 3, 4 or q\n";
        }

        if (choice >= 1 && choice <= 4)
            for (auto x : copy)
                std::cout << "title: " << x->title << '\n'
                << "rating: " << x->rating << '\n'
                << "price: " << x->price << "\n\n";
        std::cin.get();
        std::cout << "Please enter your next choice:\n";
        showMenu();
    }
    std::cout << "Done.\n";

    return 0;
}

std::shared_ptr<Review> fillReview()
{
    using std::cout;

    std::shared_ptr<Review> result(new Review);

    cout << "Please enter the book's title (quit to quit):\n";
    std::getline(std::cin, result->title);
    if (result->title == "quit")
        return nullptr;
    cout << "Please enter the book's rating: ";
    std::cin >> result->rating;
    cout << "Please enter the book's price: ";
    std::cin >> result->price;
    while (std::cin.get() != '\n');

    return result;
}

bool sortInAlphabetical(std::shared_ptr<Review> & r1, std::shared_ptr<Review> & r2)
{
    return  r1->title < r2->title;
}

void showMenu()
{
    std::cout << "1: Sort in alphabetical" << '\t'
        << "2: Sort by increasing ratings" << '\n'
        << "3: Sort by decreasing ratings" << '\t'
        << "4: Sort by increasing price" << '\n'
        << "5: Show original list" << '\t' << "q: quit\n";
    return;
}

bool sortInIncreasingRating(std::shared_ptr<Review> & r1, std::shared_ptr<Review> & r2)
{
    return r1->rating < r2->rating;
}

bool sortInDecreasingPrice(std::shared_ptr<Review> & r1, std::shared_ptr<Review> & r2)
{
    return r1->price > r2->price;
}