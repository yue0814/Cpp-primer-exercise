#include <iostream>

int main()
{
    int v1 = 718;
    int *p1 = &v1;
    *p1 = 814;
    std::cout << v1 <<std::endl;
    return 0;

}