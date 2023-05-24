#include <iostream>
#include <vector>
#include <map>

int main()
{
    std::vector<int> v = {0, 1, 2, 3, 4, 5};
    for (auto i : v)
        std::cout << i << " ";
    std::cout << std::endl;

    int a[] = {0, 1, 2, 3, 4, 5};
    for (auto i : a)
        std::cout << i << " ";
    std::cout << std::endl;

    for (int n : a)
        std::cout << "in loop" << " ";
    std::cout << std::endl;

    std::string str = "Geeks";
    for (char c : str)
        std::cout << c << " ";
    std::cout << std::endl;

    std::map<int, int> Map = {{1, 1}, {2, 2}, {3, 3}};
    for (auto i : Map)
        std::cout << "{" << i.first << ", " << i.second << "}" << std::endl;
    
    // c++17 or higher
    for (auto& [key, value] : Map)
        std::cout << key << " has value " << value << std::endl;
    
    return 0;
}