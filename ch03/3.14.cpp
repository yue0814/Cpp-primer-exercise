#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int val;
    char answ;
    vector<int> nums;
    while (cin >> val)
    {
        nums.push_back(val);
        cout << "Continue?" << endl;
        cin >> answ;
        if (answ != 'y' && answ != 'Y')
        {break;}
    }
    for (auto v : nums)
    {
        cout << v << " ";
    }
    cout << endl;
    return 0;
}