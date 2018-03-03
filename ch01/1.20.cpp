#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_items book;
    std::cout <<"Enter"<<std::endl;
    while (std::cin >> book){
        std::cout << book << std::endl;
    }
    return 0;
}