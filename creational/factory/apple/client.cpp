#include "iphone_simple_factory.h"

#include <iostream>

void printDetails(const std::optional<IPhonePtr>& iPhone)
{
    if (iPhone)
    {
        (*iPhone)->getHardware();
        (*iPhone)->assemble();
        (*iPhone)->certificates();
        (*iPhone)->pack();
    }
}

int main()
{
    std::cout << "### Ordering an iPhone X" << std::endl;
    auto iPhone1{ IPhoneSimpleFactory::orderIPhone("X", "standard") };
    printDetails(iPhone1);

    std::cout << std::endl;
    std::cout << "### Ordering an iPhone XS Max" << std::endl;
    auto iPhone2{ IPhoneSimpleFactory::orderIPhone("X", "highEnd") };
    printDetails(iPhone2);

    std::cout << std::endl;
    std::cout << "### Ordering an iPhone 11" << std::endl;
    auto iPhone3{ IPhoneSimpleFactory::orderIPhone("11", "standard") };
    printDetails(iPhone3);

    std::cout << std::endl;
    std::cout << "### Ordering an iPhone 11 Pro" << std::endl;
    auto iPhone4{ IPhoneSimpleFactory::orderIPhone("11", "highEnd") };
    printDetails(iPhone4);

    return 0;
}
