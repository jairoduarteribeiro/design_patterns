#include "iphonex_factory.h"
#include "iphone11_factory.h"

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
    IPhoneXFactory genXFactory{};
    IPhone11Factory gen11Factory{};

    std::cout << "### Ordering an iPhone X" << std::endl;
    auto iPhone1{ genXFactory.orderIPhone("standard") };
    printDetails(iPhone1);

    std::cout << std::endl;
    std::cout << "### Ordering an iPhone XS Max" << std::endl;
    auto iPhone2{ genXFactory.orderIPhone("highEnd") };
    printDetails(iPhone2);

    std::cout << std::endl;
    std::cout << "### Ordering an iPhone 11" << std::endl;
    auto iPhone3{ gen11Factory.orderIPhone("standard") };
    printDetails(iPhone3);

    std::cout << std::endl;
    std::cout << "### Ordering an iPhone 11 Pro" << std::endl;
    auto iPhone4{ gen11Factory.orderIPhone("highEnd") };
    printDetails(iPhone4);

    return 0;
}
