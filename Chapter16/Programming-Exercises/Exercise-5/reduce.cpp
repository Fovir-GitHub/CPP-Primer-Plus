#include<iostream>
#include<algorithm>

template<class T>
int reduce(T ar[], int n);

int main(void)
{
    const int MAX = 5;

    int arr[MAX];
    for (auto & x : arr)
        std::cin >> x;

    int new_size = reduce(arr, MAX);
    std::cout << "Size after reduce(): " << new_size << '\n';

    for (int i = 0; i < new_size; i++)
        std::cout << arr[i] << ' ';
    return 0;
}

template<class T>
int reduce(T ar[], int n)
{
    std::sort(ar, ar + n);
    T * new_arr = std::unique(ar, ar + n);
    int new_size = new_arr - ar;

    return new_size;
}
