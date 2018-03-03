#include <iostream>
using namespace std;

int iCount(initializer_list<int> il)
{
    int count = 0;
    for (auto val : il)
        count += val;
    return count;
}

int main(){
    cout << "1,6,9 " << iCount({1,6,9}) << endl;
    return 0;
}