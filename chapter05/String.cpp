#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string line;
    while (getline(cin, line))
    {
        int sum = 0, x;
        stringstream ss(line);

        while (ss >> x)
        {
            sum += x;
        }
        cout << sum << endl;
    }
    return 0;
}