#include <iostream>

int main()
{
    int v1, sum=0;
    std::cout << "Enter a list of numbers ending with Ctrl+Z" << std::endl;
    while (std::cin >> v1){
        sum += v1;
    }
    std::cout << "Sum of these numbers is " << sum << std::endl;

    return 0;
}