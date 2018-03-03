#include <iostream>
#include <string>
#include <cctype>
/*Remove the punctuations in a string*/
using namespace std;
int main()
{
    string s;
    cout << "Enter a string with punctuation" << endl;
    getline(cin, s);
    for (auto c : s)
    {
        if (!ispunct(c))
        {
            cout << c;
        }
    }
    cout << endl;
    return 0;
}