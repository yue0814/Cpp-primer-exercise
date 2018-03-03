#include <iostream>
using namespace std;

int max_(const int &i, int *p)
{
    if (i > *p)
        return i;
    else
        return *p;
}

int main(int argc, char const *argv[])
{
    int i, j;
    cin >> i >> j;
    int *p = &j;
    cout << "larger integer is " <<max_(i, p) << endl;
    return 0;
}
