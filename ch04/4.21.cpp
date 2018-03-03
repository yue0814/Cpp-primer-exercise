#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums = {1, 2, 3, 4, 5};
    for (auto &n : nums)
    {
        if (n%2!=0){
            n *= 2;
        }
    }
    for (auto &n : nums){
        cout << n << " ";
    }
    cout << endl;
    return 0;
}
