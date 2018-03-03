#include <iostream>
#include <vector>
#include <cstddef>

using namespace std;
const size_t nums_size = 10;
int main(){
    int nums[nums_size] = {};
    for (size_t i = 0; i != nums_size; ++i)
    {
        nums[i] = i;
    }
    for (auto v : nums)
    {
        cout << v << " ";
    }
    cout << endl;
    return 0;
}