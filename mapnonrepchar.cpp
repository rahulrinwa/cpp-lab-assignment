#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string s = "nitin";
    map<char, int> m;
    for (char ch : s)
    {
        m[ch]++;
    }
    for (char ch : s)
    {
        if (m[ch] == 1)
        {
            cout << "First non-repeating character = " << ch;
            return 0;
        }
    }

    cout << "No non-repeating character found.";
    return 0;
}