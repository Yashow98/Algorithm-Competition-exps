#include <iostream>
#include <vector>
#include <algorithm>

void next_permutation(std::vector<int>& arr)
{
    std::next_permutation(arr.begin(), arr.end());

}
int main()
{
    std::vector<int> arr = {1, 2, 3, 6, 5, 4};
    next_permutation(arr);

    for (auto i : arr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;

}