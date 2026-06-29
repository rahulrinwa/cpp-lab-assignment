#include <iostream>
#include <string>
#include <map>
#include <sstream>
using namespace std;

int main()
{
    string s = "ram is a boy and he is brave";
    map<string, int> m;

    stringstream ss(s);
    string word;

    while (ss >> word)
    {
        m[word]++;
    }
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}