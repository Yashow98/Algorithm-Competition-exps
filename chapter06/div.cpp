#include <iostream>
#include <typeinfo>

int add(int a)
{
    return a / 0.3;
}

int main()
{
    // int a = 2;
    // int res = add(a);

    // std::cout << res << std::endl;
    // std::cout << typeid(res).name() << std::endl;
    // std::cout << std::min(2, 3) << std::endl;
    int i = -1;
    int j = 10;
    std::cout << i % j << std::endl; // -1

    return 0;
}