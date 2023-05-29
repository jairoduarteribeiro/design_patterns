#include "iphonex.h"
#include "iphonexsmax.h"
#include "iphone11.h"
#include "iphone11pro.h"

#include <iostream>
#include <memory>
#include <optional>
#include <string>

using IPhonePtr = std::shared_ptr<IPhone>;

class Client
{
public:
    std::optional<IPhonePtr> orderIPhone(const std::string& generation, const std::string& level)
    {
        if (generation == "X")
        {
            if (level == "standard") return std::make_shared<IPhoneX>();
            else if (level == "highEnd") return std::make_shared<IPhoneXSMax>();
        }
        else if (generation == "11")
        {
            if (level == "standard") return std::make_shared<IPhone11>();
            else if (level == "highEnd") return std::make_shared<IPhone11Pro>();
        }
        return {};
    }

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
};

int main()
{
    Client client;
    std::cout << "### Ordering an iPhone X" << std::endl;
    auto iPhone1{ client.orderIPhone("X", "standard") };
    client.printDetails(iPhone1);

    std::cout << std::endl;
    std::cout << "### Ordering an iPhone XS Max" << std::endl;
    auto iPhone2{ client.orderIPhone("X", "highEnd") };
    client.printDetails(iPhone2);

    std::cout << std::endl;
    std::cout << "### Ordering an iPhone 11" << std::endl;
    auto iPhone3{ client.orderIPhone("11", "standard") };
    client.printDetails(iPhone3);

    std::cout << std::endl;
    std::cout << "### Ordering an iPhone 11 Pro" << std::endl;
    auto iPhone4{ client.orderIPhone("11", "highEnd") };
    client.printDetails(iPhone4);

    return 0;
}
