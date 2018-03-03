#include <iostream>
using namespace std;

void mySWAP(int *p, int *q)
{
    int tmp = *p;
    *p = *q;
    *q = tmp;
}

int main()
{
    int a = 5, b = 10;
    int *r = &a, *s = &b;
    cout << "Before" << a << " " << b << endl;
    mySWAP(r, s);
    cout << "After" << a << " " << b << endl;
    return 0;
}