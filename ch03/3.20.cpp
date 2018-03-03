#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums;
    int val;
    char aswr;
    while (cin >> val)
    {
        nums.push_back(val);
        cout << "Continue?";
        cin >> aswr;
        if (aswr != 'Y' && aswr != 'y')
        {
            break;
        }
    }
    if (nums.size() == 0)
    {return -1;}
    for (decltype(nums.size()) i = 0; i < nums.size() - 1; i+=2)
    {
        cout << nums[i] + nums[i+1] << " ";
    }
    return 0;
}