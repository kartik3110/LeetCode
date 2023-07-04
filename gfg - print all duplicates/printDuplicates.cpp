// C++ program to count all duplicates
// from string using hashing
#include <iostream>
#include <cstring>
#include <map>
using namespace std;
#define NO_OF_CHARS 256

class gfg
{
public:
    map<char, int> m;
    void printDups(string s)
    {
        for (auto el : s)
        {
            m[el]++;
        }
        for (pair<char, int> el : m)
        {
            if (el.second > 1)
            {
                cout << el.first << " - " << el.second << "\n";
            }
        }
    }
};

/* Driver code*/
int main()
{
    gfg g;
    string str = "singsg";
    g.printDups(str);
    // getchar();
    return 0;
}
