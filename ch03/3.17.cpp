#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    vector<string> words;
    string w;
    while (cin >> w)
    {
        if (w == "quit")
        {break;}
        words.push_back(w);
        
    }
    for (auto &w : words)
    {
        for (auto &c : w)
        {c = toupper(c);
        cout << c;}
        cout << endl;
    }
    cout << endl;
    return 0;
}