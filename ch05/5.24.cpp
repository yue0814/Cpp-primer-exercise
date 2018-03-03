#include <iostream>
#include <stdexcept>
using namespace std;

int main(int argc, char const *argv[])
{
    int m, n;
    cout << "Please enter two numbers" << endl;
    while (cin >> m >> n){
    try{
        if (n == 0)
            throw runtime_error("divisor is 0");
        cout << m/n << endl;
    }catch (runtime_error err){
        cout << err.what() << "enter again? y or n" << endl;
        char c;
        cin >> c;
        if (!cin || c == 'n')
        {
            break;
        }

    }
    cout << "Enter two numbers" << endl;
    }
    return 0;
}
