#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

// void next_permutation(std::vector<int>& arr)
// {
//     std::next_permutation(arr.begin(), arr.end());

// }

template<typename BidiIT>
void nextPermutation(BidiIT first, BidiIT last)
{
    const auto rfirst = std::reverse_iterator<BidiIT>(last);
    const auto rlast = std::reverse_iterator<BidiIT>(first);

    auto pivot = std::next(rfirst);

    while (pivot != rlast && *pivot >= *std::prev(pivot))
    {
        ++pivot; 
    }

    if (pivot == rlast)
    {
        std::reverse(rfirst, rlast);
    }

    auto change_number = std::find_if(rfirst, pivot, std::bind(std::less<int>(), *pivot, std::placeholders::_1));

    std::swap(*pivot, *change_number);
    std::reverse(rfirst, pivot);
}

int main()
{
    std::vector<int> arr = {1, 2, 3, 6, 5, 4};
    // next_permutation(arr);
    nextPermutation(arr.begin(), arr.end());

    for (auto i : arr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;

}