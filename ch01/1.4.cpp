#include <iostream>

int main()
{
    std::cout << "Please enter two numbers";
    std::cout << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    std::cout << "The product of " << v1 << " and " << v2 << " is " << v1*v2 << std::endl;

    return 0;
}